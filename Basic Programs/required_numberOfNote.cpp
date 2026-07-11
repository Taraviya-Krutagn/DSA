// calculate that how many notes of 100, 50, 20 and 10 are required for a given amount using switch-case.

#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int notes100 = 0, notes50 = 0, notes20 = 0, notes10 = 0;
    int remaining = amount;

    while (remaining > 0)
    {
        switch (remaining >= 100 ? 100 : remaining >= 50 ? 50 : remaining >= 20 ? 20 : 10)
        {
            case 100:
                notes100++;
                remaining -= 100;
                break;
            case 50:
                notes50++;
                remaining -= 50;
                break;
            case 20:
                notes20++;
                remaining -= 20;
                break;
            case 10:
                notes10++;
                remaining -= 10;
                break;
            default:
                cout << "Amount cannot be made with 100, 50, 20, and 10 notes." << endl;
                return 0;
        }
    }

    cout << "Required notes:" << endl;
    cout << "100: " << notes100 << endl;
    cout << "50: " << notes50 << endl;
    cout << "20: " << notes20 << endl;
    cout << "10: " << notes10 << endl;

    return 0;
}