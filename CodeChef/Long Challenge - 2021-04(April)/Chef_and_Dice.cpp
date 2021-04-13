#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pob pop_back
#define read(x) long long x; cin>>x
#define reads(x) string x; cin>>x
#define str to_string
#define rep(i,a,b) for(ll i=a; i<b; i++)
#define all(v) v.begin(),v.end()
#define allr(v) v.begin(),v.end(),greater<int>()
#define fastI_O ios_base::sync_with_stdio(false);cin.tie(NULL)
const int N = 1e9 +7;
using namespace std;

void solve(){
	read(n);
	unordered_map <ll,ll> m;
	ll ans  = 0;
	m[1] = 20;
	m[2] = 36;  
	m[3] = 51; 
	m[4] = 60;
	if(n<=4){
		ans = (m.find(n)->second);
	}
	else{
		ll temp = n/4;
		ll rem = n%4;
		ans = (temp-1)*44 + 60;
		if(rem==1){
			ans = ans +(m.find(rem)->second)-4;  //4+5+6=15 & 5+6=11 
		}
		else if(rem==2){
			ans = ans +(m.find(rem)->second)-8;
		}
		else if(rem==3){
			ans = ans +(m.find(rem)->second)-12;
		}
	}
	cout<<ans<<"\n";
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
