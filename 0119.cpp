#include<bits/stdc++.h>
using namespace std;

int main(){

int a;
int jam;
int menit;
int detik;


cin>>a;

jam = a/3600;
menit = a%3600/60;
detik = a%60;
cout <<jam<<":"<<menit<<":"<<detik<<endl;
return 0;
}
