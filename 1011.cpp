#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	int hasil;
	
	cin >>a>>b>>c;
	
	
	hasil = ((a + b)+abs(a-b))/2;
	
	if(hasil > c){
		cout<<hasil<<" eh o maior"<<endl;
	
	}
	else{
		cout<<c<<" eh o maior"<<endl;
	}
}
