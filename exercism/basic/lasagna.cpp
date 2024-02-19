#include <iostream>

using namespace std;

int ovenTime()
{
    return 40;
}

int remainingOvenTime(int actualMinutesInOven)
{
    return ovenTime() - actualMinutesInOven;
}

int preparationTime(int numberOfLayers)
{
    return numberOfLayers*2;
}

int elapsedTime(int numberOfLayers, int actualMinutesInOven)
{
    return preparationTime(numberOfLayers) + actualMinutesInOven;
}

int main()
{
    int layers = 2;
    int actualMinutesInOven = 20;

    cout << ovenTime() << endl;
    cout << remainingOvenTime(actualMinutesInOven) << endl;
    cout << preparationTime(layers) << endl;
    cout << elapsedTime(layers, actualMinutesInOven) << endl;
    
    return 0;
}