#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector <long long> v(n);
		long long sum = 0;
		bool check = false;
		for(int i=0;i<n;i++){
			cin>>v[i];
			sum+=v[i];
			if(v[i]==2)
				check = true;
		}
		if((sum&1)==0){
			cout<<0<<"\n";
		}
		else{
			if(check)
				cout<<1<<"\n";
			else
				cout<<-1<<"\n";
		}

	}
}