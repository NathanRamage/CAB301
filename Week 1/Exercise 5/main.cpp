#include <iostream>
#include <math.h>

using namespace std;

long getNumber()
{
    long num;
    cout << "This program reverses the digits in an interger.\nEnter a Positive integer: ";
    cin >> num;

    return num;
}

int numDigits(long num)
{
    int digits = 0;

    while (num)
    {
        num /= 10;
        digits++;
    }

    return digits;
}

long reversedNum(long num, int digits)
{
    long revNum = 0;

    for (int i = 0; i < digits; i++)
    {
        int rem = num % 10;
        revNum += rem;
        if (i != digits - 1)
        {
            revNum *= 10;
        }

        num = floor(num / 10);

    }

    return revNum;
}

void dispNum(long revNum)
{
    cout << "The reversed number is " << revNum;
}

int main()
{
    long num = getNumber();
    int digits = numDigits(num);
    long revNum = reversedNum(num, digits);
    dispNum(revNum);

    return 0;
}
