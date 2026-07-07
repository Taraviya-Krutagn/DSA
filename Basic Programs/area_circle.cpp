// WAP to calculate area of a Circle (A = πr2).

#include<iostream>
using namespace std;

int main()
{
    float r, area;

    cout << "Enter radius of circle: ";
    cin >> r;

    area = 3.14 * r * r;

    cout << "Area of circle is: " << area << endl;

    return 0;
}