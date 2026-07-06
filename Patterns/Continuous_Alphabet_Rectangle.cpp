// 3 2 1
// 3 2 1
// 3 2 1

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    for(int i=n;i>=1;i--)
    {
        for(int j=n;j>=1;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}