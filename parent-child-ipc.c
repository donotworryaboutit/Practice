//
// Created by skl on 9/26/22.
//

/*
 * 实现ps aux|grep xxx
 * 子进程：ps aux
 * 父进程：获取到数据，过滤
 *
 */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    //创建管道
    int fd[2];
    int ret=pipe(fd);
    if(ret==-1){
        perror("pipe");
        exit(0);
    }

    //创建子进程
    pid_t pid=fork();
    if(pid>0){
        //父进程
        //关闭写端，只读
        close(fd[1]);

        //读数据
        char buf[1024]={0};
        int ret=read(fd[0],buf,sizeof(buf));
        if(ret==-1){
            perror("read");
        }
        printf("%d",buf);

    }else if(pid==0){
        //子进程
        //关闭读端，只写
        close(fd[0]);
        //文件描述符重定向
        dup2(fd[1],stdout);

        //执行ps aux
        execlp("ps","ps","aux",NULL);

    }else{
        perror("fork");
        exit(0);
    }

    return 0;
}