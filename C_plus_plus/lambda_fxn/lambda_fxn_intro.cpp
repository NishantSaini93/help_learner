//Anonymous functions
#include <iostream>
using std::cout;
using std::endl;


int main(){
    auto x=[]()->void{//We can opt void here
        cout<<"Hello Welcome"<<endl;
    };
    x();
    []()->void{//We can opt void here
        cout<<"Thanks"<<endl;
    }();

    auto fxn=[](int a)->void{//We can opt void here
        cout<<a<<endl;
    };
    fxn(3);
    [](int a)->void{//We can opt void here
        cout<<a<<endl;
    }(5);

    auto result=[]()->int{//We can opt void here
        cout<<"Thanks"<<endl;
        return 2;
    }();


    cout<<result<<endl;


    //Capture list working
    //Why we need capturing list
    //You may want to pass your lambda to a function that calls it with a specific 
    //number of arguments (e.g., std::find_if passes a single argument to your function). 
    //Capturing variables permits you to effectively have more inputs 
    //(or outputs, if you capture by reference).
    int num1{23};
    int num2{43};

    auto fxn_c=[num1,num2](){
        cout<<num1+num2<<endl;
    };

    fxn_c();


    //Capture by value
    int c{222};

    auto fun11=[c](){
        cout<<"Inside value c:"<<c<<endl;//always print 222
    };
    for(size_t i{0};i<4;i++){
        cout<<"Outside value c:"<<c<<endl;
        fun11();
        ++c;
    }

    //Capture by reference
    int d{222};

    auto fun12=[&d](){
        cout<<"Inside value d:"<<d<<endl;//always print 222
    };
    for(size_t i{0};i<4;i++){
        cout<<"Outside value d:"<<d<<endl;
        fun12();
        ++d;
    }

    //Capture all by values
    auto fun33=[=](){
        cout<<"fun33:"<<d<<endl;//always print 222
    }; 

    //Capture all by reference
    auto fun44=[&](){
        cout<<"fun44:"<<d<<endl;//always print 222
    };   

    fun33();
    fun44();    
    return 0;
}