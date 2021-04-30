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
	vector <ll> v(n);
	ll sum = 0;
	rep(i,0,n){
		cin>>v[i];
		sum = ((sum%N) + ((v[i]+N)%N))%N;
	}
	read(q);
	ll temp = sum*2;
	cout<<temp<<"\n";
	while(--q){
		temp = ((temp%N) * (2%N))%N;
		cout<<temp<<"\n";
	}
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
	//cin>>t;
	while(t--){
		solve();
	}
	
}
