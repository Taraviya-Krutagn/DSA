// WAP to convert number of days into year, week & days [e.g. 375 days mean 1 year, 1 week and 3 days].

#include<iostream>
using namespace std;

int main()
{
    int days, years, weeks;

    cout << "Enter number of days: ";
    cin >> days;

    years = days / 365;
    weeks = (days % 365) / 7;
    days = (days % 365) % 7;

    cout << "Equivalent time is: " << years << " year(s), " << weeks << " week(s), and " << days << " day(s)." << endl;

    return 0;
}