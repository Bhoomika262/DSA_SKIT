#include<iostream>
using namespace std;

int main()
{
    int a[4],i,n;
    for (i=0;i<=4;i++)
    {
        cout<<"Enter the array["<<i<<"]: ";
        cin>>a[i];
    }
    cout<<"Enter the position of element that you want to display: ";
    cin>>n;
    cout<<a[n-1]<<" is the element at position "<<n;
}