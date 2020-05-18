#include <iostream>
 #include <iomanip>
using namespace std;
 
int main() {
 
   const double n = 3.14159;
   double  b;
    double hasil;
    cin>>b;
    
    hasil = b * b * n;
    cout<<"A="<<fixed<<setprecision(4)<<hasil<<endl;
    
    
    return 0;
}

