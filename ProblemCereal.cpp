#include <iostream>
using namespace std;

int main()
{
    double metricTonOz = 35273.92;
    double cerealOz;
    double cerealTon;
    double numBoxes;

    cout << "Enter the weight of a box of breakfast cereal in ounces." << endl;
    cin >> cerealOz;

    cerealTon = cerealOz / metricTonOz;
    numBoxes = metricTonOz / cerealOz;

    cout << "The box of cereal weighs " << cerealTon << " tons." << endl;
    cout << "The number of cereal boxes needed to make 1 ton is " << numBoxes;

    return 0;
}
