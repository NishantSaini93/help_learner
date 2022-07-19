#include <iostream>
using std::cout;
using std::string;
using std::endl;


class Dog{
    public:
        Dog()=default;
        Dog(string name,string breed,int age){
            this->name=name;
            this->breed=breed;
            this->age=new int;
           *(this->age)=age;
           cout<<"Constructed at:"<<this<<endl;//"this" is the address of object contruction
        }
        ~Dog(){
            delete age;
            cout<<"Destructor at:"<<this<<endl;//"this" is the address of object Destruction
        }

        // Dog* set_name(string name){
        //     this->name=name;
        //     return this;
        // }
        // Dog* set_breed(string breed){
        //     this->breed=breed;
        //     return this;
        // }
        // Dog* set_age(int age){
        //     *(this->age)=age;
        //     return this;
        // }

        Dog& set_name(string name){
            this->name=name;
            return *this;
        }
        Dog& set_breed(string breed){
            this->breed=breed;
            return *this;
        }
        Dog& set_age(int age){
            *(this->age)=age;
            return *this;
        }

        void print_info(){
            cout<<"Name:"<<name<<endl;
            cout<<"Breed:"<<breed<<endl;
            cout<<"Age:"<<*age<<endl;
            
        }
    
    private:
        string name{};
        string breed{};
        int *age{nullptr};
};

int main(){
    Dog dog1("dog1","breed1",5);//This is call the constructor
    dog1.print_info();
    // dog1.set_name("dog111");
    // dog1.set_breed("breed111");
    // dog1.set_age(234);
    //dog1.set_name("name1")->set_age(1)->set_breed("breed111");//This is for pointer
    dog1.set_name("name1").set_age(1).set_breed("breed111");//This is using reference
    dog1.print_info();

    return 0;
}