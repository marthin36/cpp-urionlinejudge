#include<bits/stdc++.h>

using namespace std;

int main(){
	float a,b;
	
	cin>>a>>b;
	
	
	if(a>0 && b>0){
		cout<<"Q1"<<endl;
	}
	else if(a<0 && b>0){
		cout<<"Q2"<<endl;
	}
		else if(a<0 && b<0){
		cout<<"Q3"<<endl;
	}
		else if(a>0 && b<0){
		cout<<"Q4"<<endl;
	}
	else if(a==0 &&  b>0 || b<0){
		cout<<"Eixo Y"<<endl;
		
	}
	else if(b==0 && a<0 || a>0 ){
		cout<<"Eixo X"<<endl;
		
	}
	else{
		cout<<"Origem"<<endl;
	}
}
