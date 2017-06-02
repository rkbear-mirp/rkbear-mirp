#include <iostream>
using namespace std;
int main()
{
int n=5;int m=6;
bool o=(n>m)||(n<m);
bool p=(n>m)&&(n<m);
bool q=!(n>m);
cout<<o<<p<<q<<endl;
return 0;
}
