#include <iostream>
#include <cstdlib>
#include "GameDie.h"

using namespace std;


//class constructor that seeds the random number generator
GameDie::GameDie()
{
    
}

GameDie::GameDie(int x)
{
    n = x;
}

//generate a random number between 1-6 (inclusive) and display it
int GameDie::roll()
{
    int x;
    
    srand(time(NULL));
    
    x = rand() % n+1;
    
    return x;
    
}



int main()
{
    int n;
    cout<<"Enter the number to rolled"<<endl;
    cin>>n;
    GameDie g(n);
    
    int x = g.roll();
    cout<<"Number after rolling dice is "<<x<<endl;

}