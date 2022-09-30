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
    //以只读的方式打开管道A
    int fd_A;
    fd_A = open("/home/skl/CLionProjects/Practice/fifo_A",O_RDONLY);
    if(fd_A==-1){
        perror("open_A");
        exit(0);
    }
    printf("Successfully open the fifo_A!\n");

    //以只写的方式打开管道B
    int fd_B=open("/home/skl/CLionProjects/Practice/fifo_B",O_WRONLY);
    if(fd_B==-1){
        perror("open_B");
        exit(0);
    }
    printf("Successfully open the fifo_B!\n");


    //定义一个字符数组，存放读写的内容
    char buf[128];
    //循环读写
    while(1){
        //读
        int ret=read(fd_A,buf,128);
        if(ret==-1){
            perror("read");
            break;
        }
        printf("receive:%s\n",buf);


        printf("send:");
        memset(buf,0,128);
        //获取键盘输入
        fgets(buf,128,stdin);
        //写
        ret=write(fd_B,buf, strlen(buf));
        if(ret==-1){
            perror("write");
            exit(0);
        }

    }
    close("fifo_A");
    close("fifo_B");
    return 0;

}