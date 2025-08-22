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
void insert();

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
    cout<<"Enter 3 for insertion\n";
    cout<<"Enter 4 for deletion";
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

        case 3:
            insert();
            break;
    }
}

void insert()
{
    node *ptr,*temp;
    int pos, item, count=0;
    cout<<"\nEnter the value to insert: ";
    cin>>item;
    cout<<"\nEnter the position of the new node: ";
    cin>>pos;

    temp = (node*)malloc(sizeof(node));
    temp->data=item;
    temp->next=NULL;
    temp->prev=NULL;

    if(pos==1)
    {
        temp->next=start;
        if(start != NULL)
            start->prev=temp;
        start=temp;
        if(tail == NULL)
            tail=temp;
    }
    else
    {
        ptr=start;
        while(ptr!=NULL)
        {
            count++;
            if(count==pos-1)
            {
                temp->next=ptr->next;
                temp->prev=ptr;
                if(ptr->next != NULL)
                    ptr->next->prev=temp;
                else
                    tail = temp;
                ptr->next=temp;
                break;
            }
            ptr=ptr->next;
        }
    }
    ftraverse();
    btraverse();
}


void ftraverse()
{
    node *ptr=start;
    while(ptr!=NULL)
    {
        cout << "\t" << ptr->data;
        ptr=ptr->next;
    }
    cout<<"\n";
}

void btraverse()
{
    node *ptr=tail;
    while(ptr!=NULL)
    {
        cout<<"\t"<<ptr->data;
        ptr=ptr->prev;
    }
    cout<<"\n";
}
