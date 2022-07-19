//Collection of the same type.
#include <iostream>
using std::cout;
using std::endl;


int main(){
    //declaring the array
    int array_name[3];

    //Reading values:

    // One important thing is that we cannot pass  array as pass by value.
    int size_of_array=(sizeof(array_name)/sizeof(*array_name));
    int size_of_array1=(sizeof(array_name)/sizeof(array_name[0]));

    int other_way_size=std::size(array_name);//C++17
    cout<<"Size 1:"<<other_way_size<<endl;

    cout<<"Size 2:"<<size_of_array<<endl;

    cout<<"Enter value of array index one by one:";
    for(short int i{};i<size_of_array;i++){
        cout<<"Enter element at index "<<i<<":";
        std::cin>>array_name[i];
        cout<<endl;
    }
    cout<<endl;
    for(int i{};i<3;i++){
        cout<<array_name[i]<<endl;
    }

    cout<<endl;
    std::string names_array1[2] {"Nishant","Saini"};
    for(int i{};i<2;i++){
        cout<<names_array1[i]<<endl;
    }
    cout<<endl;
    //Default values will be stuffed
    std::string names_array2[5] {"Nishant","Saini"};
    for(int i{};i<5;i++){
        cout<<names_array2[i]<<endl;
    }
    cout<<endl;
    //Omit the size get from element initialize
    std::string names_array3[] {"Nishant","Saini"};
    for(auto value:names_array3){
        cout<<value<<endl;
    }

    //Array can be constant but you will not be able to alter its elements
    const int NUMBER[] {1,2,3,4};

    //NUMBER[2]=9 can perform this


    //Other way to do operation
    cout<<endl;
    int sum{};

    for(int num:NUMBER){
        sum+=num;
    }
    cout<<"Sum is:"<<sum;

    // Array of character
    //We need to add'\0' to make below metthod work this is C type string
    //null termination
    char message[] {'H','e','l','l','o','\0'};
    //This add itself null char
    //char message[6] {'H','e','l','l','o'};
    //This below will create problem
    //char message[5] {'H','e','l','l','o'};


    //You can do like this here which is not possible in other this is addition
    cout<<endl<<"Message:"<<message<<endl;

    //This is remmended way to do char array
    char message_recommended_way_char[]{"Hello"};
    cout<<endl<<"Message 2:"<<message_recommended_way_char<<endl;

    return 0;
}