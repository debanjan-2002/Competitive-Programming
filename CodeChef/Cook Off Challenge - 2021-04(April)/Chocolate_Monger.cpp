#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pob pop_back
#define read(x) long long x; cin>>x
#define reads(x) string x; cin>>x
#define str to_string
#define rep(i,a,b) for(ll i=a; i<b; i++)
#define all(v) v.begin(),v.end()
#define allr(v) v.begin(),v.end(),greater<ll>()
#define fastI_O ios_base::sync_with_stdio(false);cin.tie(NULL)
const int N = 1e9 +7;
using namespace std;

void solve(){
	read(n);
	read(x);
	vector <ll> flavour(n);
	rep(i,0,n)
		cin>>flavour[i];
	sort(all(flavour));
	ll diff = n-x;
	if(diff == 0){
		cout<<0<<"\n";
		return;
	}
	ll count = 1;
	ll i = 1;
	while(count<diff && i<n){
		if(flavour[i]==flavour[i-1]){
			i++;
		}
		else{
			count++;
			i++;
		}
	}
	cout<<count<<"\n";
}

void init_code(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		//freopen("output.txt", "w", stdout);
	#endif 
}

int main(){
	fastI_O;
	init_code();
	int t=1;
	cin>>t;
	while(t--){
		solve();
	}
	
}
