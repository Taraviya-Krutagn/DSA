// There is info and code about all the type of conditions.
// 1. if
// 2. if-else
// 3. if-elseif-else
// 4. nested if-else

#include<iostream>
using namespace std;

int main()
{
    int a = 1;

    // if
    if(a==1)
    {
        cout<<"true"<<endl;
    }

    // if-else
    if(a==1)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }

    // if-elseif-else
    if(a==1)
    {
        cout<<"true"<<endl;
    }
    else if(a!=1)
    {
        cout<<"fslse"<<endl;
    }
    else
    {
        cout<<"invalid"<<endl;
    }

    // nested if-else
    if(a==1)
    {
        if(a>0)
        {
            cout<<"true"<<endl;
        }
        else
        {
            cout<<"false"<<endl;
        }
    }
    else
    {
        cout<<"invalid"<<endl;
    }

    return 0;
}