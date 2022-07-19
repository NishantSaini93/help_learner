#include <cstring>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::isalnum;
#include <string>
using std::string;


int main(){

    //#####################Ctype######################
    //This is C type strings which are not safe in c++
    char array1[6]{'H','e','l','l','o','\0'};
    cout<<array1<<endl;

    //check if character is alphanumberic
    //If alphanumeric then it return value other than 0 otherwise 0
    cout<<"A is alphanumeric?:"<<isalnum('A')<<endl;
    cout<<"! is alphanumeric?:"<<isalnum('!')<<endl;

    //Check if a character is black

    cout<<endl;
    char message[] {"There you go 22 yes you can Learn."};
    cout<<message<<endl;

    int blank_count{};
    for(short int i{};i<std::size(message);i++){
        if(std::isblank(message[i])){
            ++blank_count;
        }
    }

    cout<<"Total number of blank spaces found:"<<blank_count<<endl;

    int lower_chr{};
    int upper_chr{};
    int digit_chr{};
    for(short int i{};i<std::size(message);i++){
        if(std::islower(message[i])){
            ++lower_chr;
        }

        if(std::isupper(message[i])){
            ++upper_chr;
        }

        if(std::isdigit(message[i])){
            ++digit_chr;
        }

        
        
    }

    cout<<"Lower char count:"<<lower_chr<<endl;
    cout<<"Upper char count:"<<upper_chr<<endl;
    cout<<"Digit char count:"<<upper_chr<<endl;
    
    for(short int i{};i<std::size(message);i++){
        if(message[i]=='y'){
            message[i]=std::toupper(message[i]);
        }
    }

    cout<<"String:"<<message<<endl;

    for(short int i{};i<std::size(message);i++){
        if(message[i]=='Y'){
            message[i]=std::tolower(message[i]);
        }
    }
    cout<<"String:"<<message<<endl;


    const char message_ctype1[]{"The sky is blue."};

    const char* message_ctype2[]{"The sky is blue."};

    //Rememeber size dont work on cost char* but we can use std::strlen
    //strlen ignores null character

    cout<<sizeof(message_ctype1)<<endl;
    cout<<strlen(message_ctype1)<<endl;

    const char* str1_cmp{"Alabama"};
    const char* str2_cmp{"Blabama"};

    //Zero if vlues are equal othervise other number
    cout<<std::strcmp(str1_cmp,str2_cmp)<<endl;

    //other method if we want to compare specific number of characters
    //Zero if char are equal
    cout<<std::strncmp(str1_cmp,str2_cmp,3)<<endl;


    //strchr is used to find first occurence of a character
    //Here we used to find all occurence one by on 

    char target='e';
    const char* result=message_ctype1;
    int iterations{};

    while((result=std::strchr(result,target))!=nullptr){
        ++result;
        ++iterations;
    }

    cout<<"Iter:"<<iterations<<endl;

    //find last occurence

    cout<<std::strrchr(message_ctype1,'e')<<endl;


    //Joining strings
    char msg1[]="hello";
    char msg2[]=" world";
    cout<<std::strcat(msg1,msg2)<<endl;

    //How many char you want to concatinate
    cout<<std::strncat(msg1,msg2,2)<<endl;

    // copy string
    char *copy_str=new char[std::strlen(msg1)+1];//+1 for null char
    std::strcpy(copy_str,msg1);
    cout<<copy_str<<endl;

    //copy n char
    const char* ss="bb";
    char copy_str2[]={'a','b','c','\0'};
    std::strncpy(copy_str2,ss,1);
    cout<<copy_str2<<endl;



    //############std::string################
    //C++ type

    string first_name="Nishant";
    string second_name{"Saini"};
    string first_str{first_name};
    string second_str(5,'a');//filled with a
    string third{first_name,2,5};//from first_name from char 2 to 5


    cout<<first_name<<endl;
    cout<<second_name<<endl;
    cout<<first_str<<endl;
    cout<<second_str<<endl;
    cout<<third<<endl;













    return 0;
}