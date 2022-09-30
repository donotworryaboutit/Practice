#include<iostream>
#include<stdio.h>

int main(){
    int i;

    std::cin>>i;
    std::cout<<i<<std::endl;

    std::cin.unget();
    std::cin>>i;
    std::cout<<i<<std::endl;

    std::cin.ignore();
    std::cin>>i;
    std::cout<<i<<std::endl;

    return 0;
}
