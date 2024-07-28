//PROGRAM WHICH HAVE 2 STRUCTURE VARIABLES
//PROGRAME TO TAKE TWO DIFFERENT TIME PERIOD AND ADD BOTH TOGETHER
#include <iostream>
#include <string>
using namespace std;
struct time{
    int h;
    int m;
    int s;
};
int main()
{
    struct time add,a;
    cout<<"enter 1st hour";
    cin>>add.h;
    cout<<"enter 1st min";
    cin>>add.m;
    cout<<"enter 1st sec";
    cin>>add.s;
    cout<<add.h<<" hr "<<add.m<<" min "<<add.s<<" sec "<<"\n";
    cout<<"enter 2nd hour";
    cin>>a.h;
    cout<<"enter 2nd min";
    cin>>a.m;
    cout<<"enter 2nd sec";
    cin>>a.s;
    cout<<a.h<<" hr "<<a.m<<" min "<<a.s<<" sec "<<"\n";
    cout<<"ADDED TIME "<<a.h+add.h<< " hr "<<a.m+add.m<<" min "<<a.s+add.s<< " sec ";
    return 0;
}