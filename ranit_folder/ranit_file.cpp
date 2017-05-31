#include <iostream>

using namespace std;

int main () {

        int x,y,z, max = -10000;
        cout << "Enter three numbers:";
        cin >> x >> y >> z;  
       
        if (x>max)
            max=x;
        if (y>max)
            max=y;
        if (z>max)
            max=z;
        cout <<"max value  :"<< max << endl;
        return 0;
} 

            
        

    
