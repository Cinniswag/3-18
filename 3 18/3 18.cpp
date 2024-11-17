// 3 18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double principal, rate;
    int compounds;
    cout << "Please provide the Principal Balance, Interest Rate (%), and the number of times the interest is compounded." << endl;
    cin >> principal >> rate >> compounds;
        cout << "Interest Rate: " << rate << "%" << endl;
        cout << "Times Compounded: " << compounds << endl;
        cout << "Principal: $" << principal << endl;

    double savings = principal * (pow((1 + (rate / 100) / compounds), compounds));
    double interest = round((savings - principal) * 100) / 100;
    cout << "Interest: $" << interest << endl;
    cout << "Amount in Savings: $" << savings << endl;
}