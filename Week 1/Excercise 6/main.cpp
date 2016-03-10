#include <iostream>

using namespace std;

double lebinizSeries()
{
    double pi = 1;
    double denomiator = 3;

    for (int i = 0; i < 10000 - 1; i++)
    {
        if (i % 2 == 0)
        {
            pi -= (1 / denomiator);
            denomiator += 2;
        }
        else
        {
            pi += (1 / denomiator);
            denomiator += 2;
        }
    }

    pi *= 4;

    return pi;
}

void showResult(double pi)
{
    cout << "Pi = " << pi << endl;
}

int main()
{
    double pi = lebinizSeries();
    showResult(pi);
    return 0;
}
