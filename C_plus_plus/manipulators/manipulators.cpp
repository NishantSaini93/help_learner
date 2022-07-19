//Writing program to display Hello World!
#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::setw;


int main(){
    cout<<"Hello";
    cout<<"World";

    cout<<endl;

    cout<<"Hello"<<endl;
    cout<<"World"<<endl;
    cout<<endl;

    cout<<"Hello\n";
    cout<<"World\n";


    // std::flush => flushes the output buffer to its final destination.
    cout<<"This is a message.."<<endl<<std::flush;
    //After this std::flush, we are sure that at this line, the message has ben sent
    //to the stream.

    cout<<endl;

    cout<<"Unformated"<<endl;
    cout<<"Nishant"<<"Saini"<<"Nishant"<<endl;
    cout<<"Ram"<<"Shyam"<<"Ram"<<endl;
    cout<<"Sita"<<"Ram"<<"Gita"<<endl;


    //This is to allign
    cout<<std::left;
    //can be internal,right also
    //setw is used to set width in which 
    //setfill is used to fill spaces if you want
    //showpos is used to show +sign 
    //npshowpos is used to hide +sign
    cout<<setw(10)<<"Formated"<<endl;
    cout<<setw(10)<<"Nishant"<<setw(10)<<"Saini"<<setw(10)<<"Nishant"<<endl;
    cout<<setw(10)<<"Ram"<<setw(10)<<"Shyam"<<setw(10)<<"Ram"<<endl;
    cout<<setw(10)<<"Sita"<<setw(10)<<"Ram"<<setw(10)<<"Gita"<<endl;


    //Use of std::dec,std::hex, std::oct
    //This has no effect on double
    // we can also go back to decimal by applying that setting.
    //uppercase is used to show char in hex to uppercase
    //we can also go back to lowercase
    int pos_int{1234321};

    cout<<"pos_int Decimal:"<<std::dec<<pos_int<<endl;
    cout<<"pos_int Hexadecimal:"<<std::hex<<std::uppercase<<pos_int<<endl;
    cout<<"pos_int Octal:"<<std::oct<<pos_int<<endl;

    //changing the type of floating point

    double a{3.12312312432425435435354};
    double b{2000.6};
    double c{1.34e-10};

    cout<<"Default values"<<endl;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    cout<<"c:"<<c<<endl;

    cout<<"Using fixed values"<<endl;
    cout<<std::fixed;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    cout<<"c:"<<c<<endl;

    cout<<"Using scientific values"<<endl;
    cout<<std::scientific;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    cout<<"c:"<<c<<endl;

    cout<<"This is how we comes back to normal"<<endl;
    cout.unsetf(std::ios::scientific| std::ios::fixed);
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    cout<<"c:"<<c<<endl;

    //How we can set preicision
    cout<<"Set Precision test:"<<endl;
    cout<<std::setprecision(4)<<"Precision(4):"<<a<<endl;
    cout<<std::setprecision(6)<<"Precision(6):"<<a<<endl;
    cout<<std::setprecision(8)<<"Precision(8):"<<a<<endl;

    //How to show unshow zeros after decimal point (trailing zeros)

    float num1{0.1};
    cout<<std::showpoint<<num1<<endl;
    cout<<std::noshowpoint<<num1<<endl;






    cout<<endl;



    
    









    
    return 0;
}