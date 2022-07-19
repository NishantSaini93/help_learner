//Same function name but different arguments
#include <iostream>
using std::cout;

//We can not overload just by return type
void ovrFxn(int,int);
void ovrFxn(int,int,int);//number of parameter
void ovrFxn(int,double);//type of parameter
void ovrFxn(double,int);//order of parameter




int main(){
    ovrFxn(1,2,3);
    ovrFxn(1,2);
    ovrFxn(1,2.2);
    ovrFxn(1.1,23);
    return 0;
}

void ovrFxn(int a,int b){
    cout<<"Fxn1"<<std::endl;
}

void ovrFxn(double a,int b){
    cout<<"Fxn2"<<std::endl;
}
void ovrFxn(int a,double b){
    cout<<"Fxn3"<<std::endl;
}
void ovrFxn(int a,int b, int c){
    cout<<"Fxn4"<<std::endl;
}