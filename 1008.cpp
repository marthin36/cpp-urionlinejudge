#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	float a,b,c;
	int number;
	float salary;
	
	cin >>a;
	cin>>b;
	cin>>c;
	
	salary = b * c;
	cout<<"NUMBER = "<<a<<endl;
	cout<<fixed<<setprecision(2)<<"SALARY = U$ "<<salary<<endl;
}
