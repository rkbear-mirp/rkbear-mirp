#include <iostream>
using namespace std;
int main()
{
cout <<"Enter a number";
int n;double sum=0.0;
cin>>n;
for (int i=1;i<=n;i++)
{
sum=sum+6.0/(i*i);
}
cout<<"Sum="<<sum<<endl;
return 0;
}
