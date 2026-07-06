// A
// B C
// C D E
// D E F G

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
            char ch = 'A' + i + j;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}