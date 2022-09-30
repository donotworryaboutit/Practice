//
// Created by skl on 9/25/22.
//

#include<unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>

int main() {

    //在fork之前创建管道
    int pipefd[2];
    int ret = pipe(pipefd);
    if (ret == -1) {
        perror("pipe");
    }

    //创建子进程
    pid_t pid = fork();

    if (pid > 0) {
        //父进程
        printf("i am parent process,pid:%d\n", getpid());
        //设置非阻塞
        int flags = fcntl(pipefd[0], F_GETFL);
        flags |= O_NONBLOCK;
        fcntl(pipefd[0], F_SETFL, flags);

        char buf[1024] = {0};
        //读
        while (1) {
            int len = read(pipefd[0], buf, sizeof(buf));
            if (len < 0) {
                perror("read:");
            }
            printf("len:%d\n",len);
            printf("parent receive:%s,pid:%d\n", buf, getpid());
            memset(buf,0,1024);
            sleep(2);
        }
    } else if (pid == 0) {
        //子进程
        printf("i am child process,pid:%d\n", getpid());

        //写
        while (1) {
            char *str = "hello,i am child！";
            int ret = write(pipefd[1], str, strlen(str));
            if (ret < 0) {
                perror("write");
            }
            sleep(5);
        }
    }
}