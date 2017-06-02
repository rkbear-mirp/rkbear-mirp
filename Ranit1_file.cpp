#include<iostream>

using namespace std;

int main() {
     int i,n,sum=0;
     cout << "Enter the number:";
     cin >> i;
     n=i%10;
     for(; i>=n ; sum+=n)
     i/=10;{
 
    cout << "The sum is:" << sum <<endl;
}
     return 0;
}
