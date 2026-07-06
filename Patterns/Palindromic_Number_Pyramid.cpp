// 1
// 2 3
// 3 4 5

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=i+1;j++)
        {
            cout<<(i+j)<<" ";
        }
        cout<<endl;
    }
}