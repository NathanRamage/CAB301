#include <iostream>

using namespace std;

int getNumber()
{
    int i;
    cout << "Please enter an integer: ";
    cin >> i;
    return i;
}

void displaySum( int num )
{
    int sum = 0;
    for (int i = 0; i < num; i++ )
    {
        sum += (i+1);
    }
    cout << "The sum from 1 to " << num << " is " << sum << endl;
}

int main()
{
    int num = getNumber();
    displaySum(num);
    return 0;
}
