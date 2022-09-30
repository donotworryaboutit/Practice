//
// Created by skl on 9/26/22.
//

#include <unistd.h>

#include <stdio.h>

int main(){
    int pipefd[2];
    int ret=pipe(pipefd);
    if(ret==-1){
        perror("pipe");
    }
    printf("pipe size:%ld", fpathconf(pipefd[0],_PC_PIPE_BUF));
    return 0;
}