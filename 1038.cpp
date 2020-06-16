#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	
	cin>>a>>b;
	
	switch(a){
		case 1:
			cout<<fixed<<setprecision(2)<<"Total: R$ "<<b*4.00<<endl;
		break;
		case 2:
			cout<<fixed<<setprecision(2)<<"Total: R$ "<<b*4.50<<endl;
		break;
		case 3:
			cout<<fixed<<setprecision(2)<<"Total: R$ "<<b*5.00<<endl;
		break;
		case 4:
			cout<<fixed<<setprecision(2)<<"Total: R$ "<<b*2.00<<endl;
		break;
		case 5:
			cout<<fixed<<setprecision(2)<<"Total: R$ "<<b*1.50<<endl;
		break;
		
		
	}
	
	return 0;
}
