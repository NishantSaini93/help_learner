//A mechanism to place constraints on your template type parameters
//C++20 feature
//Built-in and custom concepts are there
#include <iostream>
using std::cout;
using std::endl;

/**
 * template<typename T>
 * void print_name(T n){
 * static_assert(std::is_integral<T>::value,"Must pass in an integral argument");
 * do_someething()}
 */


//Using build in
template <typename T>
requires std::integral<T>
T add(T a,T b){
    return a+b;
}


//Using traits
// template <typename T>
// requires std::is_integral_v<T>
// T add(T a,T b){
//     return a+b;
// }


//2nd syntax
// template <std::integral T>
// T add(T a,T b){
//     return a+b;
// }

//Syntax 3
// auto add(std::integral auto a,std::integral auto b)
// {
//     return a+b;
// }


//Syntax 4
// template <typename T>
// T add(T a,T b) requires std::integral<T>{
//     return a+b;
// }


// custom concept building

template<typename T>
concept MyIntegral=std::is_integral_v<T>;

template<typename T>
concept Multiline=requires(T a,T b){
    a*b;//want to support multiplication operator
};

template<typename T>
concept Incrementable=requires(T a){
    a+1;
    ++a;
    a++;
};

//Using custom build
// template <typename T>
// requires MyIntegral<T>
// T add1(T a,T b){
//     return a+b;
// }






int main(){
    cout<< add(1,2)<<std::endl;
    return 0;
}