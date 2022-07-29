//Writing program to show pass the function
#include <iostream>
#include <functional>
using std::cout;
using std::endl;

void function_name(int x,int y){
    x=12;
    y=12;
    cout<<x+y<<endl;
}

void function_name1(int x,int y,void (*function_var)(int,int)){
    function_var(x,y);
}

void function_name2(int x,int y,std::function<void(int,int)> function_var){
    function_var(x,y);
}




int main(){
    int x{1};
    int y{2};
    function_name1(x,y,&function_name);
    function_name2(x,y,&function_name);
    return 0;
}