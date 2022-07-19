#include <iostream>
using std::cout;
using std::endl;


int main(){
    //Dynamic array dont work with std::size and rage based for loop
    int *p_scores{new(std::nothrow) int[5]{1,2,3,4,5}};

    //We can access it by using regular array notaion or pointer arthimetic
    for(size_t i{};i<5;i++){
        cout<<"Value:"<<p_scores[i]<<":"<<*(p_scores+i)<<endl;
    
    }
    delete[] p_scores;
    p_scores=nullptr;
    return 0;
}