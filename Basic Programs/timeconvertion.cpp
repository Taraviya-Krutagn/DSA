// WAP to convert seconds into hours, minutes & seconds and print in HH:MM:SS [e.g. 10000 seconds mean 2:46:40 (2 Hours, 46 Minutes, 40 Seconds)].

#include<iostream>
using namespace std;

int main()
{
    int seconds, hours, minutes;

    cout << "Enter time in seconds: ";
    cin >> seconds;

    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    seconds = seconds % 60;

    cout << "Time in HH:MM:SS format is: " << hours << ":" << minutes << ":" << seconds << endl;

    return 0;
}