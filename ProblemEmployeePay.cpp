#include <iostream>
using namespace std;

int main()
{
    double const HOURLY_PAY = 16.00;
    double const OVERTIME_PAY = 16.00 * 1.5;
    double const SS_TAX = 0.06;
    double const FED_TAX = 0.14;
    double const STATE_TAX = 0.05;
    double const INSURANCE = 10.00;
    double hours;
    double overtimeHours = hours - 40;
    double grossPay, netPay;
    double ssAmount, fedAmount, stateAmount;

    cout << "Input the number of hours worked this week." << endl;
    cin >> hours;

    if (overtimeHours > 0)
    {
        grossPay = ((40 * HOURLY_PAY) + (overtimeHours * OVERTIME_PAY));
    }
    else if (overtimeHours <= 0)
    {
        grossPay = (hours * HOURLY_PAY);
    }

    ssAmount = grossPay * SS_TAX;
    fedAmount = grossPay * FED_TAX;
    stateAmount = grossPay * STATE_TAX;

    netPay = grossPay - ssAmount - fedAmount - stateAmount - INSURANCE;

    cout << "Gross Pay: $" << grossPay << endl;
    cout << "Social Security: $" << ssAmount << endl;
    cout << "Federal Income: $" << fedAmount << endl;
    cout << "State: $" << stateAmount << endl;
    cout << "Insurance: $" << INSURANCE << endl;
    cout << "Net Pay: $" << netPay;

    return 0;
}
