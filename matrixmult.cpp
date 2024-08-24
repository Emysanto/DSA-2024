#include <iostream>
#include <string>
using namespace std;
int main()
{int r,c,r1,c1;
cout<<"enter the row and coloum of matrix 1"<<endl;
cin>>r>>c;
cout<<"enter the row and coloum of matrix 2"<<endl;
cin>>r1>>c1;
int a[r][c],b[r1][c1];
int g[r][c1];
cout<<"enter the elements of matrix 1"<<endl;
for(int i=0;i<r;i++)
{for(int j=0;j<c;j++)
{cin>>a[i][j];
}}
cout<<"enter the elements of matrix 2"<<endl;
for(int i=0;i<r;i++)
{for(int j=0;j<c;j++)
{cin>>b[i][j];
}}
cout<<"matrix 1"<<"\n";
for(int i=0;i<r;i++)
{for(int j=0;j<c;j++)
{cout<<a[i][j]<<" ";
}cout<<"\n";}
cout<<"matrix 2"<<"\n";
for(int i=0;i<r1;i++)
{for(int j=0;j<c1;j++)
{cout<<b[i][j]<<" ";
}cout<<"\n";}
cout<<"matrix 1 * matric 2:"<<"\n";
for(int i = 0; i < r; i++) 
{ for (int j = 0; j <c1; j++) 
 { g[i][j] = 0; 
 for (int k = 0; k < r; k++) 
 { g[i][j] += a[i][k] * b[k][j]; } } }
for(int i=0;i<r;i++)
{for(int j=0;j<c1;j++)
{cout<<g[i][j]<<" ";
}
    cout<<"\n";
}
}