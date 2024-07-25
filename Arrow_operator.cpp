/*CODE FOR IMPLEMENTING ARROW OPERATOR IN C++ USING STRUCTURE*/
#include<iostream>
#include<string>
using namespace std;
struct sample{
    int a;
};
int main()
{
    sample obj;
    sample* ptr=&obj;
    ptr->a=5;
    cout<<"ptr->a: "<<ptr->a;
    return 0;

}