#include <iostream>
using std::cout;

void fxn1(const int x,const int y,int *result);
void fxn2(const int x,const int y,int &result);
int fxn3(const int x,const int y);
int main(){
    int x{21};
    int y{32};
    int result1{};
    int result2{};
    int result3{};
    fxn1(x,y,&result1);
    fxn2(x,y,result2);
    result3=fxn3(x,y);
    cout<<"Result1:"<<result1<<std::endl;
    cout<<"Result2:"<<result2<<std::endl;
    cout<<"Result3:"<<result3<<std::endl;
    return 0;
}

void fxn1(const int x,const int y,int* result){
    *result=x+y;
}

void fxn2(const int x,const int y,int &result){
    result=x+y;
}

int fxn3(const int x,const int y){
    return x+y;
}