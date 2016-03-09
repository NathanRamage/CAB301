#include <iostream>
#include <list>

using namespace std;

list<int> getNumbers()
{
    list<int> values;
    int num;

    cout << "This program finds the largest integer in a list.\n";
    cout << " Enter 0 to signal the end of the list.\n";

    do
    {
        cout << "? ";
        cin >> num;
        values.push_back(num);
    } while (num != 0);

    return values;
}

void findMax( list<int> values )
{
    int maxNum = 0;
    // iterate through list
    for (list<int>::const_iterator iterator = values.begin(), end = values.end(); iterator != end; ++iterator)
    {
        // dereference the iterator to get the value
        if (*iterator > maxNum)
        {
            maxNum = *iterator;
        }
    }

    cout << "The largest value is " << maxNum;
}

int main()
{
    list<int> values = getNumbers();
    findMax(values);
    return 0;
}
