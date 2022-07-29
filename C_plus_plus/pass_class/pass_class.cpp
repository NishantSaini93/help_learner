#include <iostream>

//Class A with a attribute hello
class A{
    public:
        int hello{};
};

//Class B with functions to pass class A object as parameter
//in different ways.
class B{
    public:
        //  this is pass by reference
        void change(A &a){
            a.hello=12;
            std::cout<<a.hello<<std::endl;
        }

        //this is pass by value
        void change2(A a){
           a.hello=121;
           std::cout<<a.hello<<std::endl; 
        }

        //this is pass by pointer
        void change3(A *a){
           a->hello=121;
           std::cout<<a->hello<<std::endl; 
        }
};

int main(){
    A a;
    B b;
    b.change(a);
    std::cout<<a.hello<<std::endl;
    b.change2(a);
    std::cout<<a.hello<<std::endl;
    b.change3(&a);
    std::cout<<a.hello<<std::endl;

    return 0;
}