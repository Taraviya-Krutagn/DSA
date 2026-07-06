// D
// C D
// B C D
// A B C D

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            char ch = 'A' + ((n - 1) - (i - j));
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}