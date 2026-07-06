// A B C
// B C D
// C D E

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            char ch = 'A' + i + j;
            cout<<ch<<" ";

        }
        cout<<endl;
    }
}