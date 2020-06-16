#include<bits/stdc++.h>

using namespace std;

int main(){
	int a;
	cin>>a;
	int tahun,bulan,hari;
	
	
	tahun = a /365;
	bulan = a % 365 /30;
	hari  = a % 365 % 30;
	
	cout<<tahun<< " ano(s)"<<endl;
	cout<<bulan<< " mes(es)"<<endl;
	cout<<hari<< " dia(s)"<<endl;
	
	return 0;
}
