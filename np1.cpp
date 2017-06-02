#include <iostream>
using namespace std;
int main()
{
cout <<"Enter two numbers";
int a;int b;int k;
cin >>a;
cin >>b;
int c=a*b;
for(int i=1;i<=c;i++)
{
if((a%i==0)&&(b%i==0))
k=i;
}
cout <<"The highest common factor="<<k<<endl;
return 0;
}

