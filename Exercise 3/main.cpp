#include <iostream>
#include <math.h>

#define FOOT 12

using namespace std;

double getDist()
{
    double dist;

    cout << "Enter the distance in metres: ";
    cin >> dist;

    return dist;
}

void dispConverstion(double dist)
{
    double inchToM = 0.0254; //number of metres per inch
    double inches = dist / inchToM; //number of total inches

    int reminader = (int) floor(inches) % FOOT; //number of whole inches left
    int diff = (int) floor(inches) - reminader;
    double feet = (inches - (double)reminader) / FOOT; // number of feet

    cout << dist << " = " << (int)feet << " feet and " << (inches - diff) << " inches";
}

int main()
{
    double dist = getDist();
    dispConverstion(dist);
    return 0;
}
