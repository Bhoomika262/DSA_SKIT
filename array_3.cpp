#include<iostream>
using namespace std;

int main()
{
    int a[5],i,n,pos;
    for(i=0;i<=4;i++)
    {
        cout<<"Enter the array["<<i<<"]: ";
        cin>>a[i];
    }
    for(i=0;i<=4;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<"\nEnter the new element: ";
    cin>>n;
    cout<<"\nEnter the position at which you want to enter the new element: ";
    cin>>pos;
    for(i=4;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=n;
    for(i=0;i<=5;i++)
    {
        cout<<a[i]<<"\t";
    }
    
}