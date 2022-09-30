//
// Created by skl on 9/27/22.
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <string.h>
#include <wait.h>

int main(){
    //创建匿名内存映射区
    int size=4096;
    void *ptr = mmap(NULL, size, PROT_READ |PROT_WRITE, MAP_SHARED|MAP_ANONYMOUS, 1, 0);
    if (ptr == MAP_FAILED) {
        perror("mmap");
        exit(0);
    }
    //父子进程通信
    pid_t pid=fork();
    if(pid>0){
        //父进程
        strcpy((char *)ptr,"hello,world");
        wait(NULL);
    }else if(pid==0){
        //子进程
        sleep(1);
        printf("%s\n",(char *)ptr);
    }else{
        perror("fork");
        exit(0);
    }

    int ret=munmap(ptr,size);
    if(ret==-1){
        perror("munmap");
        exit(0);
    }
    return 0;
}