//先输入一个空格，再输入回车，无法打印出The sum:0
//原因：若缓冲区中第一个字符是空格、tab或换行这些分隔符时
//     cin>> 会将其忽略并清除，继续读取下一个字符
//     若缓冲区为空，则继续等待
//     但是如果读取成功，字符后面的分隔符是残留在缓冲区的，cin>> 不做处理。

//缓冲区数据被>>读取后，数据其实还在，只是指针往后走了，想要重新访问可以用unget()函数
//清除缓冲区数据可以用cin.ignore()

//没解决：debug进不了while循环

//计算输入的未知数量的数之和
#include<iostream>
int main(){
    int value=0,sum=0;
    //cin不会丢弃空白符，但是>>会跳过空白符（空格和回车）
    //当输入回车，或std::cin无效时（遇到文件结束符或者输入流类型不是int）循环结束
    //linux文件结束符号为Ctrl+D，Windows和Unix为Ctrl+Z
    while(std::cin.peek()!='\n' && std::cin>>value){
            if(std::cin.peek()==' '){
                std::cin.get();
            }
            sum+=value;
        }
    std::cout<<"The sum:"<<sum<<std::endl;
}

/*以下这种写法遇到非法输入，如字符，不能退出循环
#include<iostream>

int main(){
    int value=0,sum=0;
    std::cout<<"Enter number:"<<std::endl;
    while (std::cin.peek()!='\n'){
        std::cin>>value;
        sum+=value;
        if(std::cin.peek()==' '){
            std::cin.get();
        }
    }
    std::cout<<"Sum:"<<sum<<std::endl;
    return 0;
}

 */