//Writing program to display Hello World!
#include <iostream>
using std::cout;
#include <iomanip>
using std::setprecision;
using std::endl;


int main(){
    float number1{1.123454232324f};
    double number2={1.23213121312};
    long double number3{1.221313131141l};
    
    //Set precision
    cout<<setprecision(5);
    cout<<"Number 1 is:"<<number1<<endl;
    cout<<"Number 2 is:"<<number2<<endl;
    cout<<"Number 3 is:"<<number3<<endl;


    return 0;
}