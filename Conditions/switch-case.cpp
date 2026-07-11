#include <iostream>
using namespace std;

int main()
{
    int a = 1;

    switch(a)
    {
        case 1:
            cout<<"true"<<endl;
            break;
        case 2:
            cout<<"false"<<endl;
            break;
        default:
            cout<<"invalid"<<endl;
    }

    return 0;
}