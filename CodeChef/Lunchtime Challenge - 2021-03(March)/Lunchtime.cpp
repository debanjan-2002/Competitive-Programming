// Partial solution (sub-task) -> O(N^2) solution 
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector <long> v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		for(int i=0;i<n;i++){
			long maximum = INT_MIN;
			int j=i-1;
			long ans = 0;
			while(j>=0){
				maximum = max(maximum,v[j]);
				if(v[i]==v[j] && v[j]>=maximum){
					ans++;
				}
				j--;
			}
			j=i+1;
			maximum = INT_MIN;
			while(j<n){
				maximum = max(maximum,v[j]);
				if(v[i]==v[j] && v[j]>=maximum){
					ans++;
				}
				j++;
			}
			cout<<ans<<" ";
		}
		cout<<"\n";
	}
}