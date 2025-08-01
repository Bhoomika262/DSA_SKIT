#include<iostream>
#include<cstdlib> 
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
    struct node *ptr;
};
typedef struct node node;
node *start=NULL;
node *tail=NULL;

void ftraverse();
void btraverse();

int main()
{
    int i, n, item, ch;
    node *ptr;
    cout<<"Enter the number of node: ";
    cin>>n;
    cout<<"Enter the values: ";
    for(i=1;i<=n;i++)
    {
        cin>>item;

        ptr=(node*)malloc(sizeof(node));
        ptr->data=item;
        ptr->next=NULL;
        ptr->prev=NULL;

        if(start==NULL)
        {
            start=ptr;
            tail=ptr;
        }

        else
        {
            tail->next=ptr;
            ptr->prev=tail;
            tail=ptr;
        }
    }

    cout<<"Enter 1 for forward traversing\n";
    cout<<"Enter 2 for backward traversing\n";
    cout<<"Enter the choice: ";
    cin>>ch;
    
    switch(ch)
    {
        case 1:
            ftraverse();
            break;

        case 2: 
            btraverse();
            break;
    }
}

void ftraverse()
{
    node *ptr=start;
    while(ptr!=NULL)
    {
        cout << "\t" << ptr->data;
        ptr=ptr->next;
    }
}

void btraverse()
{
    node *ptr=tail;
    while(ptr!=NULL)
    {
        cout<<"\t"<<ptr->data;
        ptr=ptr->prev;
    }
}
