#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int u,v,a,s;
		cin>>u>>v>>a>>s;
		if(u<=v){
			cout<<"Yes"<<"\n";
		}
		else{
			long long temp = u*u - 2*a*s;
			if(temp<=0){
				cout<<"Yes"<<"\n";
			}
			else{
				double result = sqrt(temp);
				// cout<<"Result : "<<result<<"\n";
				// cout<<"V :"<<v<<"\n";
				if(result<=v){
					cout<<"Yes"<<"\n";
				}
				else{
					cout<<"No"<<"\n";
				}
			}
		}
	}
}