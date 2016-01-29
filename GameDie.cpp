#include <iostream>
#include <cstdlib>
#include "GameDie.h"

//class constructor that seeds the random number generator
GameDie::GameDie()
{
}

//generate a random number between 1-6 (inclusive) and display it
void GameDie::roll()
{
    int x;
    
    srand(time(NULL));
    
    x = rand() % 6+1;
    
    cout<<"Number after rolling dice is "<<x<<endl;
}
