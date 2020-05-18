#include <iostream>
#include <iomanip>
#include<bits/stdc++.h>
using namespace std;

int main(){
	double a,b;
	char name[20];

	double salary;
	
	cin>>name;
	cin>>a;
	cin>>b;
	
	
	 salary=a+(b*15)/100;

	cout<<fixed<<setprecision(2)<<"TOTAL = R$ "<<salary<<endl;
}
