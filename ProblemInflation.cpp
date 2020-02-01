#include <iostream>
using namespace std;

int main()
{
    double cost;
    double years;
    double expCost;
    double inflation;

    cout << "Input the cost of the item." << endl;
    cin >> cost;

    cout << "Input the number of years from now which the item will be purchased." << endl;
    cin >> years;

    cout << "Input the rate of inflation - as a percentage." << endl;
    cin >> inflation;

    //convert to decimal
    inflation = inflation / 100;

    for (int i = 0; i < years; ++i)
    {
        cost += cost * inflation;
    }

    cout << "In " << years << " years, the item will cost $" << cost;

    return 0;
}
