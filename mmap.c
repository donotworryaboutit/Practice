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
    //��һ���ļ�
    int fd = open("/home/skl/CLionProjects/Practice/test.txt", O_RDWR );
    if (fd == -1) {
        perror("open");
        exit(0);
    }
    //��ȡ�ļ��Ĵ�С
    int size = lseek(fd, 0, SEEK_END);

    //�����ļ�ӳ����
    void *ptr = mmap(NULL, size, PROT_READ |PROT_WRITE, MAP_SHARED, fd, 0);
    if (ptr == MAP_FAILED) {
        perror("mmap");
        exit(0);
    }

    //�����ӽ���
    pid_t pid = fork();
    if (pid > 0) {
        //������
        wait(NULL);
        char buf[128];
        strcpy(buf, (char *) ptr);
        printf("read data:\n%s", buf);
    } else if (pid == 0) {
        //�ӽ���
        strcpy((char *) ptr, "hello,son!");
    }
    //�ر�
    munmap(ptr, size);
    return 0;
}

