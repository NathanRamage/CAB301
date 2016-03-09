#include <iostream>

using namespace std;

int getNumber()
{
    int num = 0;

    cout << "Enter N: ";
    cin >> num;

    return num;
}

void displayOddCalc(int num)
{
    int i = 0;//vairble to iterate through
    int testNum = 1;
    int sum = 0;
    while (i < num)
    {
        if (testNum % 2 != 0)
        {
            sum += testNum;
            testNum++;
            i++;
        }
        else
        {
            testNum++;
        }
    }

    cout << "The sum of the first " << num << " odd numbers = " << sum << endl;
}

int main()
{
    int num = getNumber();
    displayOddCalc(num);
    return 0;
}
