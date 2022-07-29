//This is the snake game
#include <iostream>
using std::cout;
using std::endl;
#include <cstdlib>
#include <thread>
using std::this_thread::sleep_for;


//Macro defination
#define sq(x) (x*x)
#define WIDTH 50
#define HEIGHT 25

int x=10,y=10;

void board()
{

    for (size_t rows=0;rows<HEIGHT;rows++)
    {
        cout<<"\t\t||";
        for (size_t cols=0;cols<WIDTH-2;cols++)
        {
            if(rows==0 || rows==HEIGHT-1)
            {
                cout<<"=";
            }
            else if (x==cols && y==rows)
            {
                cout<<"o";
            }
            
            else{
                cout<<" ";
            }
        }
        cout<<"||\n";

    }

}

int main(){
    while(true){
        board();
        x++;
        sleep_for(std::chrono::milliseconds(3000));
        system("clear");
    }
    
    return 0;
}