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

    //��ԭʼ���ļ������ڴ�ӳ��
    void *ptr = mmap(NULL, size, PROT_READ |PROT_WRITE, MAP_SHARED, fd, 0);
    if (ptr == MAP_FAILED) {
        perror("mmap");
        exit(0);
    }

    //����һ�����ļ�������չ���ļ�
    int fd1= open("cpy.txt",O_RDWR|O_CREAT,0664);
    if(fd1==-1){
        perror("open2");
        exit(0);
    }


    truncate("cpy.txt",size);
    write(fd1,"",1);

    //�����ļ�ӳ�䵽�ڴ���
    void *ptr1=mmap(NULL,size,PROT_READ|PROT_WRITE,MAP_SHARED,fd1,0);
    if(ptr1==MAP_FAILED){
        perror("mmap");
        exit(0);
    }
    //ͨ���ڴ濽������һ���ļ����ڴ����ݿ������µ��ļ��ڴ���
    memcpy(ptr1,ptr,size);

    //�ͷ���Դ
    munmap(ptr1,size);
    munmap(ptr,size);

    close(fd1);
    close(fd);

    return 0;
}