#include <iostream>
#include<tuple>
using std::cout;
using std::ostream;
using std::endl;
using std::string;
/*
Inheritence is a way to reuse the code and functionality
We can use already build class to save time and money
Primarily there are five form of inheritance in C++
Single Inheritance: 1 Base class 1 drived class
Multiple Inheritance: 2 or more base class 1 derived class
Hierarchical Inheritance: 1 base class two derived class
Multilevel Inheritance: base 1 class->derived class(base class 2) from base 1 -> dervided class
Hybrid Inheritence: Combination of multiple inheritance


You can inherit classes in 3 mode public protected  and provate

Public inheritance makes public members of the base class public in the derived class,
and the protected members of the base class remain protected in the derived class.

protected inheritance makes the public and protected members of the base class protected
in the derived class.

private inheritance makes the public and protected members of the base class private in 
the derived class.
*/

//Base class
class Employee{
    int id{};
    int salary{};
    public:
        void set_data(int id,int salary){
            this->id =id;
            this->salary=salary;
        }

        std::pair<int,int> get_data(){
            std::pair<int,int> data(id,salary);
            return data;
        }
};
// Derived Class
class Programmer:public Employee{
    std::string p_language{};
    public:
        Programmer(std::string language){
            p_language=language;
        }

        std::tuple<int,int,std::string> get_programmer_data(){
            std::pair<int,int> data_emp=get_data();
            std::tuple<int,int,std::string> data;
            data=std::make_tuple(data_emp.first,data_emp.second,p_language);
            return data;

        }



};

int main(){
    Programmer p("C++");
    p.set_data(1,1000);
    auto data=p.get_programmer_data();

    cout<< std::get<0>(data)<<std::endl;
    cout<< std::get<1>(data)<<std::endl;
    cout<< std::get<2>(data)<<std::endl;
    return 0;
}