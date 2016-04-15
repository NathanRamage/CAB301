#include <iostream>
#include <math.h>

using namespace std;

double getNumber()
{
    double i;
    cout << "Please enter an integer: ";
    cin >> i;
    return i;
}

void displaySum( double num )
{
    double sum = 0;
    /*for (int i = 0; i < num; i++ )
    {
        sum += (i+1);
    }*/

    sum = ( pow(num, 2) + num ) / 2;

    cout << "The sum from 1 to " << num << " is " << sum << endl;
}

int main()
{
    double num = getNumber();
    displaySum(num);
    return 0;
}
