//C++ program to implement SELF REFERENTIAL in STRUCTURES
#include <iostream>
#include <string>
using namespace std;
struct hi{
    int a;
    char b;
    struct hi* link;
};
int main()
{
    struct hi obj;
    obj.link=NULL;
    obj.a=4;
    obj.b=5;
    obj.link=&obj;
    cout<<obj.link->a;
    
    return 0;
}