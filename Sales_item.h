//
// Created by skl on 9/22/22.
//

#ifndef SALESITEM_H
#define SALESITEM_H
#include <iostream>
#include <string>

/*
 * 类的设计
 * 属性：isbn，本数，总收入
 * 行为：1.输入isbn，本数，售价，能够输出isbn，本数，总收入，平均价格
 *          需要重载运算符>>,左侧为输入流对象，右侧为各属性，返回输入流
 *          需要重载运算符<<
 *          这两个运算符应该定义为普通函数 但由于需要访问数据成员，所以友元
 *          需要写一个计算平均价格的函数
 *      2.输入两条isbn相同的记录，能够将各属性相加
 *          判断两条isbn是否相同，写一个函数
 *          在1的基础上，还需要将运算符+重载，左右侧均为对象，返回一个新对象，新对象的属性为左右对象属性之和
 *          将属性相加需要重载运算符+=
 *          +=改变了对象的状态，所以定义为成员函数
 *          +定义为普通函数
 *      3.输入两条记录，判断两条记录是否相等
 *          重载运算符==，其中用到判断isbn是否相等的函数
 *          ==定义为普通函数
 *      注意：由于所有重载的运算符都调用频繁，所以都加上关键字inline内联，减少栈调用，减少系统开销
 *
 *
 */
class Sales_item{
public:

    //两个有参构造函数

    //第一个：参数类型为 字符串的常量引用（不能让这个引用变成另一个变量的引用）
    //:isbn(book),units_sold(0),revenue(0.0) 初始化列表
    //这种写法等价于在函数体内依次给数据成员赋值isbn=book;units_sold=0;revenue=0,0;
    Sales_item(const std::string &book):isbn(book),units_sold(0),revenue(0.0){}

    //第二个：参数类型为 istream(输入流对象)(是std::basic_istream类模板的一个实例化)的引用
    //函数体：将输入流缓冲区的数据读取到this指针（指向被调用函数所属的对象）
    Sales_item(std::istream &is){ is >> *this;}

    //友元函数(不是类的成员函数）
    //运算符>>重载 参数为输入流的引用，本类的引用
    friend std::istream& operator>>(std::istream &,Sales_item &);

    //运算符<<重载 参数为输出流的引用，常量本类的引用 返回值为输出流的引用
    friend std::ostream& operator<<(std::ostream &,const Sales_item &);

public:
    //运算符函数+=为成员函数，则它的左侧运算对象绑定到隐式的this指针上
    //运算符+=重载 参数为本类的引用 返回值为本类的引用
    Sales_item & operator+=(const Sales_item&);

public:
    //求平均价格的成员函数
    double avg_price() const;
    //相同的isbn
    bool same_isbn(const Sales_item &rhs)const{
        return isbn == rhs.isbn;
    }
    //无参构造函数 通过列表初始化给数据成员赋值
    Sales_item():units_sold(0),revenue(0.0){}

public:
    //数据成员
    std::string isbn;//ISBN
    unsigned units_sold;//本数
    double revenue;//总收入
};

//输入输出数据流
using std::istream;
using std::ostream;

//本类对象相加
Sales_item operator+(const Sales_item &,const Sales_item &);

//判断相等：两个对象的三个数据成员相等
inline bool operator==(const Sales_item &lhs,const Sales_item &rhs){
    return lhs.units_sold == rhs.units_sold && lhs.revenue == rhs.revenue && lhs.same_isbn(rhs);
}

//判断是否不等
//在相等的基础上
inline bool operator!=(const Sales_item &lhs,const Sales_item &rhs){
    return !(lhs == rhs);
}

//+=数据成员相加
inline Sales_item & Sales_item::operator +=(const Sales_item &rhs){
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

//+对象相加
inline Sales_item operator+(const Sales_item &lhs,const Sales_item &rhs){
    //拷贝构造函数！lhs拷贝出ret
    Sales_item ret(lhs);
    //ret与rhs的本数，总收入相加
    ret += rhs;
    return ret;
}

//数据成员读取输入流
inline istream& operator>>(istream &in,Sales_item &s){
    double price;
    //对象s的数据成员读取in输入流的数据
    in >> s.isbn >> s.units_sold >> price;
    //输入流有效
    if(in)
        s.revenue = s.units_sold * price;
    //无效时，默认给本数，总收入赋0
    else
        //无参构造函数，作用：初始化数据成员
        s = Sales_item();
    return in;
}

//将对象的数据成员输入到输入流中
inline ostream& operator<<(ostream &out,const Sales_item &s){
    out << s.isbn << "\t" <<s.units_sold << "\t" << s.revenue << "\t" << s.avg_price();
    return out;
}

//求平均价格
inline double Sales_item::avg_price() const{
    //本书不为0
    if(units_sold)
        return revenue/units_sold;
    else
        return 0;
}
#endif
