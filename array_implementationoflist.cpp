#include <iostream>
#include <list>
using namespace std;
class Myclass
{public:
     void insert(int n,int arry[])
 {
    int e;
    int p;
    cout<<"Enter the element and position of the elementto be inserted";
    cin>>e>>p;

    for(int i=n;i>p;i--)
    {
        arry[i]=arry[i-1 ];
        
        
    }
    arry[p]=e;
        n++;
    display(n,arry);
    
}
void deletee(int n,int array[])
{
    int p;
    cout<<"Enter the position of the elment to be deleted";
    cin>>p;
    for(int i=p;i<n;i++)
    {
        array[p]=array[p+1];
    }
    n--;
        display(n,array);
    
}
    void search(int n,int array[])
    {
        int s;
        int c;
        cout<<"Enter the element to be searched";
        cin>>s;
        for(int i=0;i<n;i++)
        {  if(array[i]==s)
             { cout<<"found";}
            else
              {  c++;
              }
              if(c==n)
              {cout<<"not found";}
        }
        
    }
    void display(int n,int arry[])
    {
        for(int i=0;i<n;i++)
        {
            cout<<arry[i]<<" ";
        }
        
    }
};
int main() {
    Myclass obj;
    int n;
    int o;
    cout<<"Enter the num of elements in the list";
    cin>>n;
     int lis[n];
    cout<<"Enter the elements of the list";
    for(int i=0;i< n;i++)
    {
        cin>>lis[i];
    }
    cout<<"To insert an element in the list type 1.\nTo delete an element in the list type 2.\nTo Display the elements in the list type 3.\nTo search for an element in the list type 4 ";
    
    cin>>o;
    switch(o)
    {
        case 1:obj.insert(n,lis);
        break;
        case 2:obj.deletee(n,lis);
        break;
        case 3:obj.display(n,lis);
        break;
        case 4:obj.search(n,lis);
        break;
        
      

    }
   
    return 0;
}