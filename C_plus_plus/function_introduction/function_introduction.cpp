/**
 * @file function_introduction.cpp
 * @brief : A reusable piece of code that can take a number of optional inputs 
 * and produce some desirable output.
 * 
 */
#include <iostream>
#include "lucky_number.hpp"
using std::cout;
using std::endl;

//Function prototyping
void enter_bar(int);
int max_int(int,int);
void welcome();

//signature of function is function name + function parameter
/**
 * @brief you need to know that “argc” always shows argument count as “1” more than the actual number of the passed arguments. 
 * This is so because the name of the object file is also counted as a command-line argument
 * 
 * @param argc “argc” refers to the argument count
 * @param argv refers to a character array that holds all the arguments that are passed to the “main()”
 * @return int 
 */
int main(int argc, char** argv){
    welcome();
    cout<<"Enter your age:";
    int age;
    std::cin>>age;
    enter_bar(age);

    int get_max_num=max_int(5,88);

    cout<<"Maximum number is:"<<get_max_num<<endl;

    cout<<"Lucky number:"<<lucky_int()<<endl;



    
    return 0;
}

//This is pass by value
//So will not effect on actual value
void enter_bar(int age){
    if(age>18){
        cout<<"You're allowed"<<endl;
    }
    else{
        cout<<"You're not allowed"<<endl;
    }
    
}
/**
 * @brief This function returns the max integer out of two number
 * 
 * @param num1 : number 1 having default value 2
 * @param num2 :number 2 having default value 3
 * @return int : max out of num1 and num2
 */
int max_int(int num1=2,int num2=3){
    if(num1>num2){
        return num1;
    }
    else{
        return num2;
    }

}

void welcome(){
    cout<< "Welcome to the jungle!LOL"<<std::endl;
}