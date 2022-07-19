#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int a{};
    cout<<"Enter number between 1 and 3:";
    cin>>a;
    
    if (a==0){
        cout<<a;
    }
    else if(a==2){
        cout<<"Hello";
    }
    else if(a==3){
        cout<<"World";

    }
    else{
        cout<<"Not applicable";
    }
    cout<<endl;

    //In switch we can only use integer or enum
    switch(a){
        case 1:{
            cout<<"case 1";
        }
        break;
        case 2:{
            cout<<"case 2";
        }
        break;
        case 3:{
            cout<<"case 3";
        }
        break;
        default:{
            cout<<"Not applicable";
        }
    }
    cout<<endl;

    //Using enums
    enum Colors { 
        Red, 
        Green, 
        Blue 
    }; 
    Colors color = Colors::Red; 
    switch (color) { 
        case Colors::Red: { 
                cout << "The color is Red!"; 
        } 
        break; 
            
        case Colors::Green: { 
                cout << "The color is Green"; 
        } 
        break; 

        default: { 
                cout << "Unknown color!"; 
        } 
        break; 
    }
    cout<<endl;
    int ternary_operator_test{};
    ternary_operator_test=(10<5)?2:7;
    cout<<"Ternary Result:"<<ternary_operator_test<<endl;

    std::string ternary_operator_test1{};
    ternary_operator_test1=(10<5)?"hello":"world";
    cout<<"Ternary Result 1:"<<ternary_operator_test1<<endl;


}