\*CODE TO IMPLEMENT REFERENCE IN STRUCTURE USING C++*\
#include <iostream>
#include <string>
using namespace std;
struct emy{
    int a=5;
    string b;

};
struct ashlin{
    int b=9;
    string a="my";
      struct emy obj;
};
int main()
{
    struct ashlin obj1;
    cout<<obj1.b<<" ";
    cout<<obj1.obj.a;


    return 0;
}