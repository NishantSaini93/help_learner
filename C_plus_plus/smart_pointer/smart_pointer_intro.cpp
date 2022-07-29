//Writing program to use of smart pointer
//A smart pointer is wrapper of raw pointer
// Advantage they delocate memory itself

/*
Three types of pointers are their
1>Unique
2>Shared
3>Weak
*/
#include <iostream>
#include <memory>
using std::cout;

std::weak_ptr<int> gw;
 
void observe()
{
    std::cout << "gw.use_count() == " << gw.use_count() << "; ";
    // we have to make a copy of shared pointer before usage:
    if (std::shared_ptr<int> spt = gw.lock()) {
        std::cout << "*spt == " << *spt << '\n';
    }
    else {
        std::cout << "gw is expired\n";
    }
}




int main(){
    //Unique ptr cannot be shared
    //memory will be destroyed after scope
    std::unique_ptr<int> unptr=std::make_unique<int>(25);
    cout<<*unptr<<std::endl;
    //cannot do like this
    //std::unique_ptr<int> unptr1=unptr;
    std::unique_ptr<int> unptr1=std::move(unptr);
    //cout<<*unptr<<std::endl; It will give exception null pointer exception
    cout<<*unptr1<<std::endl;

    //It have the count for all of the owner
    //To know how many shared owner use_count
    //In the end of scope all ptr will be destroyed
    std::shared_ptr<int> shrptr1=std::make_shared<int>(25);
    cout<<"Shared count:"<<shrptr1.use_count()<<std::endl;
    std::shared_ptr<int> shrptr2=shrptr1;
    cout<<"Shared count:"<<shrptr1.use_count()<<std::endl;


    // it need to convert to shared pointer to use the scope of weak pointer
    // ends with the parent pointer
    std::weak_ptr<int> weakptr1=shrptr1;
    {
        std::shared_ptr<int> sp=std::make_shared<int>(25);
        gw = sp;
 
        observe();
    }
 
    observe();
    return 0;
}