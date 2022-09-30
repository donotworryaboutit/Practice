//
// Created by skl on 9/25/22.
//

#include<unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <string.h>

int main(){

    //在fork之前创建管道
    int pipefd[2];
    int ret=pipe(pipefd);
    if(ret==-1){
        perror("pipe");
    }

    //创建子进程
    pid_t pid=fork();

    if(pid>0){
        //父进程
        printf("i am parent process,pid:%d\n",getpid());

        //读
        char buf[1024]={0};
        int len=read(pipefd[0],buf,sizeof(buf));
        if(len<0){
            perror("read:");
        }
        printf("parent receive:%s,pid:%d\n",buf,getpid());
        //写
        char *str="hello,i am parent！";
        int ret=write(pipefd[1],str,strlen(str));
        if(ret<0){
            perror("write");
        }
        sleep(1);

    }else if(pid==0){
        //子进程,从管道的[1]写数据
        printf("i am child process,pid:%d\n",getpid());
        char *str="hello,i am child！";
        int ret=write(pipefd[1],str,strlen(str));
        if(ret<0){
            perror("write");
        }
        sleep(0.1);
        //读
        char buf[1024]={0};
        int len=read(pipefd[0],buf,sizeof(buf));
        if(len<0){
            perror("read:");
        }
        printf("child receive:%s,pid:%d\n",buf,getpid());


    }
    return 0;
}