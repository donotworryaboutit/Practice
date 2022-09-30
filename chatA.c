//
// Created by skl on 9/26/22.
//

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main(){
    //创建管道A B
    int ret=access("/home/skl/CLionProjects/Practice/fifo_A",F_OK);
    if(ret==-1){
        printf("管道A不存在，创建管道！\n");
        ret=mkfifo("/home/skl/CLionProjects/Practice/fifo_A",0775);
        if(ret==-1){
            perror("fifo_A:");
            exit(0);
        }
    }
    ret=access("/home/skl/CLionProjects/Practice/fifo_B",F_OK);
    if(ret==-1){
        printf("管道B不存在，创建管道！\n");
        ret=mkfifo("/home/skl/CLionProjects/Practice/fifo_B",0775);
        if(ret==-1){
            perror("fifo_B:");
            exit(0);
        }
    }

    //以只写的方式打开管道A
    //若读端没有打开，将会一直阻塞在open
    int fd_A=open("/home/skl/CLionProjects/Practice/fifo_A",O_WRONLY);
    if(fd_A==-1){
        perror("open_A");
        exit(0);
    }
    printf("Successfully open the fifo_A!\n");

    //以只读的方式打开管道B
    int fd_B;
    fd_B = open("/home/skl/CLionProjects/Practice/fifo_B", O_RDONLY);
    if(fd_B==-1){
        perror("open_B");
        exit(0);
    }
    printf("Successfully open the fifo_A!\n");

    //定义一个字符数组，存放要写入的内容
    char buf[128];
    //循环读写
    while(1){
        memset(buf,0,128);
        printf("send:");
        //获取键盘输入
        fgets(buf,128,stdin);
        //写
        ret=write(fd_A,buf, strlen(buf));
        if(ret==-1){
            perror("write");
            exit(0);
        }

        //读
        ret=read(fd_B,buf,128);
        if(ret<=0){
            perror("read");
            break;
        }
        printf("receive:%s\n",buf);

    }
    close("fifo_A");
    close("fifo_B");
    return 0;

}