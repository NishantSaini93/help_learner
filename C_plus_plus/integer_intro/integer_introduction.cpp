
#include <iostream>
using std::cout;

int main(){
int elephant_count;
int lion_count{};
int dog_count{10};
int cat_count{15};

int domesticated_animals{dog_count+cat_count};
//Gives error
//int bad_init{doesnt,doest1};

//Gives error
//int narrowing_conversion{1.2};


int apple_count(10);
int orange_count(15);

int fruit_count(apple_count+orange_count);
//int bad_init1(doesnt,doest1);

//Silent data conversion
int narrowing_conversion1(1.2);


int bike=2;
int truck=7;
int vehicle=bike+truck;
int narrowing=2.9;
signed int num=-400000;
cout<<num;
}



