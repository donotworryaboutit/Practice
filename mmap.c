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
int main() {
    //打开一个文件
    int fd = open("/home/skl/CLionProjects/Practice/test.txt", O_RDWR );
    if (fd == -1) {
        perror("open");
        exit(0);
    }
    //获取文件的大小
    int size = lseek(fd, 0, SEEK_END);

    //创建文件映射区
    void *ptr = mmap(NULL, size, PROT_READ |PROT_WRITE, MAP_SHARED, fd, 0);
    if (ptr == MAP_FAILED) {
        perror("mmap");
        exit(0);
    }

    //创建子进程
    pid_t pid = fork();
    if (pid > 0) {
        //父进程
        wait(NULL);
        char buf[128];
        strcpy(buf, (char *) ptr);
        printf("read data:\n%s", buf);
    } else if (pid == 0) {
        //子进程
        strcpy((char *) ptr, "hello,son!");
    }
    //关闭
    munmap(ptr, size);
    return 0;
}

