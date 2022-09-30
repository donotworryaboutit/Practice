//
// Created by skl on 9/23/22.
//

/* Person类设计：
 * 数据成员（私有）：name,age
 * 成员函数：Init,set,get
 */

#ifndef PRACTICE_PERSON_H
#define PRACTICE_PERSON_H

#include <string>
using namespace std;

class Person{
public:
    Person();

    Person(Person &p);

    void Init(const char *name, int age);

    void SetName(string name);

    string GetName();

    void SetAge(int age);

    int GetAge();

    void ShowPerson();

private:
    string m_name;
    int m_age;
};













#endif //PRACTICE_PERSON_H
