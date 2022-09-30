//
// Created by skl on 9/23/22.
//

/* 要求：
 * 请设计一个Person类，
 * Person类具有name和age属性，
 * 提供初始化函数 (Init)，
 * 并提供对name和age的读写函数(set，get)，
 * 但必须确保age的赋值在有效范围内(0-100),超出有效范围，则拒绝赋值，
 * 并提供方法输出姓名和年龄。
 */


#include <iostream>
#include "Person.h"

void Person::Init(const char *name, int age) {
    m_name=name;
    if(age>0 && age<100)
        m_age=age;
    else
        cout<<"年龄必须在0-100以内"<<endl;
}

void Person::SetName(string name) {
    m_name=name;
}

string Person::GetName() {
    return m_name;
}

void Person::SetAge(int age) {
    if(age>0 && age<100)
        m_age=age;
    else
        cout<<"年龄必须在0-100以内"<<endl;
}

int Person::GetAge() {
    return m_age;
}

void Person::ShowPerson() {
    cout<<"name:"<<m_name<<endl;
    cout<<"age:"<<m_age<<endl;
}

Person::Person(Person &p) {
    m_name=p.m_name;
    m_age=p.m_age;
}

Person::Person() {

}

int test01(){
    Person p1;
    p1.Init( "Lorna", 19);
    p1.ShowPerson();
    p1.SetAge(111);
}

int main(){
    test01();
    return 0;
}