//
// Created by skl on 9/26/22.
//

#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main(){
    //判断管道是否存在
    int ret=access("/home/skl/CLionProjects/Practice/fifo1",F_OK);
    if(ret==-1){
        printf("管道不存在！创建管道");
        int ret_1=mkfifo("/home/skl/CLionProjects/Practice/fifo1",0664);
        if(ret_1==1){
            perror("mkfifo");
            exit(0);
        }
    }
    //打开管道
    int fd=open("/home/skl/CLionProjects/Practice/fifo1",O_WRONLY);
    if(fd==-1){
        perror("open");
        exit(0);
    }
    //写数据
    for(int i=0;i<100;i++){
        char buf[1024];
        sprintf(buf,"hello,%d",i);
        printf("write data:%s\n",buf);
        write(fd,buf,strlen(buf));
        sleep(1);
    }
    return 0;
}
