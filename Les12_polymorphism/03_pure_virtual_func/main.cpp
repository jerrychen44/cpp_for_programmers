/*Goal:
*/

#include "main.hpp"

/*

Pure Virtual Functions are a special case of virtual functions.

A pure virtual function is used when the base class has a
function that will be defined in its derived class, but it has no meaningful definition in the base class.

*/

int main()
{
    Cat c1("polly", 20.0, "cat");
    Dog d1("spot", 30.0, "dog");

    cout<<"\nPolly Rate: $"<<c1.calcDailyRate();
     cout<<"\nSpot Rate: $"<<d1.calcDailyRate();

    return 0;
}

/*
in cat constructor
in dog constructor
Polly Rate: $30
Spot Rate: $60

*/