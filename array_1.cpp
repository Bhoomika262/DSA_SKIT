#include<iostream>
using namespace std;

int main()
{
    int a[4],i;
    for(i=0;i<4;i++)
    {
        cout<<"Enter the array["<<i<<"]: ";
        cin>>a[i];
    }
    for(i=0;i<4;i++)
    {
        cout<<a[i]<<"\t";
    }
}