/*CODE IMPLEMENTING ARRAY IN STRUCT */
#include <iostream>
#include <string>
using namespace std;
struct new1{
int a;
string b;
};
int main()
{new1 ar[3];
 for(int i=0;i<3;i++)
 {
     cin>>ar[i].a;
     cin>>ar[i].b;
 }
 for(int i=0;i<3;i++)
 {
     cout<<"element "<<i+1<<"ID :"<<ar[i].a<<" Name="<<ar[i].b<<endl;
 }
    return 0;
}