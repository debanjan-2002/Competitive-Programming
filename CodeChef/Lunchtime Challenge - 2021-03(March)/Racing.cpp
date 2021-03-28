#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long x,r,m;
		cin>>x>>r>>m;
		long time_in_sec = 60*r;
		if(x>=time_in_sec){
			if(r<=m)
				cout<<"Yes"<<"\n";
			else
				cout<<"No"<<"\n";
		}
		else{
			if((time_in_sec-x)*2 +x <=60*m){
				cout<<"Yes"<<"\n";
			}
			else
				cout<<"No"<<"\n";
		}
	}
}