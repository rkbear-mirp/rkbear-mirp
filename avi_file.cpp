#include<iostream>
#include<cmath>
using namespace std;
 
 int main() {
  
float a,b,c,root1=0,root2=0,delta;
cout << " Enter three numbers a,b & c of" << " ax^2 + bx + c  :\n" ;
cin >> a >> b >> c ;
if (!a)            // if a is zero
cout << " value of \'a\' should not be zero" << "\n Aborting!!!!!! " << "\n";
else
{
delta = b*b-4*a*c ;   //begining of else's body
if (delta>0)
{
  root1 =(-b+sqrt(delta))/(2*a);
  root2 =(-b-sqrt(delta))/(2*a);
cout << "Roots are real and unequal"<<"\n";
cout << "Root1 = " << root1 << "Root2= "<< root2 << "\n";
}
else if (delta==0)
{
root1 = -b/(2*a) ;
cout << "Roots are real and equal" << "\n";
cout << "Root1 =" << root1 ;
cout << "Root2 =" << root2 << "\n";
}
else
cout << "Roots are complex and imaginary " << "\n";
}    //end of else's body
return 0;
}
