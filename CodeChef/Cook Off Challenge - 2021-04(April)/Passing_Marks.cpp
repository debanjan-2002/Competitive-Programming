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
	read(am);
	read(bm);
	read(cm);
	read(tm);
	read(a);
	read(b);
	read(c);
	if(a>=am && b>=bm && c>=cm && a+b+c>=tm)
		cout<<"YES\n";
	else
		cout<<"NO\n";
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
