#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,x;
		cin>>n>>x;
		map <long long,long long> m;
		for(int i=0;i<n;i++){
			long long space,rating;
			cin>>space>>rating;
			m[rating] = space;
		}
		map<long long,long long>::reverse_iterator it;
		long long ans = 0;
		for(it = m.rbegin();it!=m.rend();it++){
			if((it->second)<=x){
				ans = it->first;
				break;
			}
		}
		cout<<ans<<"\n";
	}
}