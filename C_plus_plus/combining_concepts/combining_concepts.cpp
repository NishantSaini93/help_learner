#include <iostream>
using std::cout;

template<typename T>
concept TinyType=requires(T t){
    sizeof(T)<=4;
    requires sizeof(T)<=4;
};

template<typename T>


//We can use && or || to combine concepts
T func(T t) requires std::integral<T> && TinyType<T>{
    std::cout<<t;
}
int main(){
    cout<< "Hello World!"<<std::endl;
    return 0;
}