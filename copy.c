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

    int fd= open("/home/skl/CLionProjects/Practice/test.txt",O_RDWR,0664);
    if(fd==-1){
        perror("open1");
        exit(0);
    }
    int size= lseek(fd,0,SEEK_END);

    //对原始的文件进行内存映射
    void *ptr = mmap(NULL, size, PROT_READ |PROT_WRITE, MAP_SHARED, fd, 0);
    if (ptr == MAP_FAILED) {
        perror("mmap");
        exit(0);
    }

    //创建一个新文件，并拓展该文件
    int fd1= open("cpy.txt",O_RDWR|O_CREAT,0664);
    if(fd1==-1){
        perror("open2");
        exit(0);
    }


    truncate("cpy.txt",size);
    write(fd1,"",1);

    //将新文件映射到内存中
    void *ptr1=mmap(NULL,size,PROT_READ|PROT_WRITE,MAP_SHARED,fd1,0);
    if(ptr1==MAP_FAILED){
        perror("mmap");
        exit(0);
    }
    //通过内存拷贝将第一个文件的内存数据拷贝到新的文件内存中
    memcpy(ptr1,ptr,size);

    //释放资源
    munmap(ptr1,size);
    munmap(ptr,size);

    close(fd1);
    close(fd);

    return 0;
}