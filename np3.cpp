#include <iostream>
using namespace std;
int main()
{
cout <<"How hot is it now?";
int temp;
cin >>temp;
if(temp>=35)
cout <<"It is very hot."<<endl;
else if((temp>=25)&&(temp<35))
cout <<"It is quite warm"<<endl;
else
cout <<"It is cool..."<<endl; 
return 0;
}
