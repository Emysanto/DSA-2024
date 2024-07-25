/*CODE TO IMPLEMENT POINTER IN C++ USING STRUCTURE*/
#include <iostream>
#include <string>
using namespace std;
struct emy{
    int a=5; ;

};
int main()
{
    struct emy obj;
    struct emy* ptr=&obj;

   int y=ptr->a;

    cout<<y;
    return 0;
}