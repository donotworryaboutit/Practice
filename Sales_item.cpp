//
// Created by skl on 9/22/22.
//

#include "Sales_item.h"
#include <iostream>
using namespace std;

int main(){
    Sales_item book_1,book_2;
    //输出提示信息
    cout<<"请输入两组书籍销售记录，格式为：ISBN 售出本数 单本价格"<<endl;
    //键盘输入到缓冲区，从输入流cin读取数据book
    while(cin>>book_1>>book_2){
        if(book_2.same_isbn(book_1)){
            //book输出到cout输出流
            cout<<"ISBN 售出本数 销售额 平均售价："<<book_1+book_2<<endl;
        }else{
            cout<<"ISBN不同！"<<endl;
        }
    }


    return 0;
}
