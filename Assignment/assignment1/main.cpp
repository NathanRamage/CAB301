#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int * getRandomNum ()
{
    static int randNum[10];

    for (int i = 0; i < 10; ++i)
    {
        randNum[i] = ( rand() % 100 ) - 50;
    }

    return randNum;
}

void insertSort (int length, int * p)
{
    int j, value;

    for (int i = 1; i < length; i++)
    {
        value = * (p + i);
        for (j = i - 1; j >= 0 && * (p + j) > value; j--)
        {
            * (p + j + 1) = *(p + j);
        }
        * (p + j + 1) = value;
    }
}

int main()
{

    srand( (unsigned) time( NULL ) );

    int * p;
    p = getRandomNum();

    cout << "Before sort\n";

    for (int i = 0; i < 10; i++)
    {
        cout << to_string(*(p + i)) + " ";
    }

    insertSort(10, p);

    cout << "After sort\n";

    for (int i = 0; i < 10; i++)
    {
        cout << to_string(*(p + i)) + " ";
    }
    return 0;
}

