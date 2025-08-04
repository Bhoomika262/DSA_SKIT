#include<iostream>
using namespace std;

int main()
{
    int a[4],i,pos;
    for(i=0;i<=4;i++)
    {
        cout<<"Enter the array["<<i<<"]: ";
        cin>>a[i];
    }
    for(i=0;i<=4;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<"\nEnter the position of the element that you want to delete: ";
    cin>>pos;
    for(i=pos;i<=4;i++)
    {
        a[i-1]=a[i];
    }
    for(i=0;i<4;i++)
    {
        cout<<a[i]<<"\t";
    }
}