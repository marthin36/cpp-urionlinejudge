#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double  a,b,c;
	double hasil;

cin>>a;
cin>>b;
cin>>c;

hasil = ((a*2)  +  (b*3)+  (c*5)  )/ (2+3+5) ;
cout<<fixed<<setprecision(1)<<"MEDIA = "<<hasil<<endl;

return 0;
	
}
