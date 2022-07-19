/**
 * The require cluase can take foure kinds of requirementts
 * 1. Simple
 * 2. Nested
 * 3.Compoud
 * 4.Type  //Need to add it later
 */
#include <iostream>
using std::cout;

//Simple
template<typename T>
concept TinyType=requires(T t){
    sizeof(T)<=4;//Simple requirement: Only checks syntax

    requires sizeof(T)<=4;//Nested:check if the expression is true

    {t+1} noexcept->std::convertible_to<int>;//Compound
    //noexcept is optional
    //checks if t+1 is valid and doesnt throw exception
    //result should be convertible to int
};

int main(){
    cout<< "Hello World!"<<std::endl;
    return 0;
}