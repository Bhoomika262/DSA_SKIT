#include<iostream>
using namespace std;
#define MAX 10

int main()
{
    int stack[MAX], top=-1, ch, i;
    do
    {
        cout<<"\nEnter 1 to push operation\n";
        cout<<"Enter 2 to peep operation\n";
        cout<<"Enter 3 to pop operation\n";
        cout<<"Enter 4 to exit\n";
        cout<<"Enter your choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                if(top == MAX-1)
                {
                    cout<<"Stack Overflow\n";
                }
                else
                {
                    top++;
                    cout<<"Push element: ";
                    cin>>stack[top];
                }
                break;

            case 2:
                if(top == -1)
                {
                    cout<<"Stack is empty\n";
                }
                else
                {
                    cout<<"Stack elements: ";
                    for(i=top; i>=0; i--)
                    {
                        cout<<stack[i]<<" ";
                    }
                    cout<<endl;
                }
                break;
            
            case 3:
                if(top==-1)
                {
                    cout<<"Stack Underflow\n";
                }
                else
                {
                    cout<<"Popped element: "<<stack[top]<<endl;
                    top--;
                }
                break;
                
            case 4:
                cout<<"Exiting...\n";
                break;

            default:
                cout<<"Invalid choice\n";
        }

    }while(ch!=4);

    return 0;
}
