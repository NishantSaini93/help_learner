//Program to add two number

//Input stream objects can read and interpret input from sequences of characters
#include <iostream>
// To get the type of variable info
#include <typeinfo>
using std::cout;
using std::pair;
using std::make_pair;
using std::cin;
using std::endl;

//Function to add two number
pair<int,int> addInteger(int number1, int number2){
    //Check type of argument is correct
    bool check_number1=(typeid(number1) == typeid(std::int16_t));
    bool check_number2=(typeid(number2) == typeid(std::int16_t));
    if ((check_number1) || (check_number2)){
        return make_pair(0,0);
    }
    int sum_of_integer{0};

    //Adding two number
    sum_of_integer=number1+number2;
    return make_pair(1,sum_of_integer);

}


int main(){
    int number1{0};
    int number2{0};
    cout<<"Enter the first number:";
    cin>>number1;
    cout<<endl<<"Enter second number:";
    cin>>number2;
    cout<<number1<<endl;
    cout<<number2<<endl;
    pair<int,int> result_returned;
    result_returned=addInteger(number1,number2);
    
    if (result_returned.first==0){
        cout<<"Failed to produce result"<<endl;
    }
    else{
        cout<<"Result is:"<<result_returned.second<<endl;
    }
    return 0;
}