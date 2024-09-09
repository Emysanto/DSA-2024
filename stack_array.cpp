#include <iostream>
using namespace std;
class myclass
{public:
    void create(int n)
    {
        int stack[n];
        int top=-1;
        cout<<"enter elements for the stack";
        for(int i=0;i<n;i++)
        {
            top++;
            cin>>stack[top];
        }
        int r=n+1;
        display(n,stack);
        cout<<"To push element into he stack press 1 \n";
        cout<<"to pop press 2 \n";
        cout<<"To display press 3\n";
        cout<<"To get the top most element in the stack press 4";
        int o;
        cin>>o;
        switch(o)
        {
            case 1:push(r,stack);
            break;
            case 2:pop(n,stack);
            break;
            case 3:display(n,stack);
            break;
            case 4:top1(n,stack);
            break;
            default:cout<<"invalid input";
            break;
        }
    }
    void push(int n,int stack[])
    {int top=n-1;
    int x;
    cout<<"enter element to push";
    cin>>x;
    stack[top]=x;
    display(n,stack);

        
    }
    void pop(int n,int stack[])
    {
        int top=n-1;
        display(top,stack);
    }
    void top1(int n,int stack[])
    {
        cout<<stack[n-1];
    }
    void display(int n,int stack[])
    {int top=n;
      for(int i=0;i<n;i++)
        {
            top--;   
            cout<<stack[top]<<" ";
        }
    }
        
    };
int main() {
    cout <<"enter the num of elements required in the stack";
    int n;
    myclass obj;
    cin>>n;
    obj.create(n);
        
    

    return 0;
}