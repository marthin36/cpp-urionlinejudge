#include<bits/stdc++.h>

using namespace std;

int main(){
	
	float x1,x2;
	float y1,y2;
	
	float hasil,hasil2;
	cin>>x1>>y1;
	cin>>x2>>y2;
	
	
	hasil = pow((x2-x1),2)+pow((y2-y1),2);
	hasil2 = sqrt(hasil);
	cout<<fixed<<setprecision(4)<<hasil2<<endl;
	
}
