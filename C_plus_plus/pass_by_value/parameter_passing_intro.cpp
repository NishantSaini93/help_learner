#include <iostream>
using std::cout;

int ageIncBy1(int);
void ageDecBy1(int*);
void setAge0(int&);
int main(){
    int age{21};
    cout<< "Returned value:"<<ageIncBy1(age)<<std::endl;
    cout<< "Age value:"<<age<<std::endl;

    ageDecBy1(&age);
    cout<< "Age value after pointer:"<<age<<std::endl;

    setAge0(age);
    cout<< "Age value after reference:"<<age<<std::endl;
    
    return 0;
}

//pass by value
int ageIncBy1(int age){
    //No effect on actual 
    age+=1;
    return age;
}

//Pass by pointer
void ageDecBy1(int* age){
    //Will change the value
    *age-=1;
}

//Pass by reference
void setAge0(int& age){
    age=0;
}