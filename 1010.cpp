#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[2];
	int b[2];
	float c[2];
	float d = 0;
	
	for(int i=0;i<2;i++){
		cin>>a[i];
		cin>>b[i];
		cin>>c[i];
	
	}
	
	for(int i=0;i<2;i++){
		d = d + (b[i] * c[i]);
	}	
	
	cout<<fixed<<setprecision(2)<<"VALOR A PAGAR: R$ "<<d<<endl;

}
