#include <iostream>
class A{
    public:
    int hello{};
};

class B{
    public:
        void change(A &a){
            a.hello=12;
            std::cout<<a.hello<<std::endl;
        }
};

int main(){
    A a;
    B b;
    b.change(a);
    std::cout<<a.hello;
    return 0;

}