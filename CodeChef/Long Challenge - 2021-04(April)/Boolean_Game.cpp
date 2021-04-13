// Only Sub-Task
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
	read(m);
	read(k);
	vector <ll> g(n);
	rep(i,0,n)
		cin>>g[i];
	vector <ll> u(m);
	vector <ll> v(m);
	vector <ll> d(m);
	vector <ll> res;
	rep(i,0,m){
		cin>>u[i];
		cin>>v[i];
		cin>>d[i];
		u[i]--;			// To make it 0-based index format
		v[i]--;			// To make it 0-based index format		
	}
	ll total = (ll)pow(2,n);        // Total possible combinations
	rep(i,0,total){
		ll temp[n] = {(ll)0}; 
		ll curr = (ll)0;
		rep(j,0,n){
			if(i&((ll)1<<j)){
				temp[j] = (ll)1;
				curr += g[j];
			}
		}
		rep(j,0,m){
			bool check = true;
			rep(k,u[j],v[j]+1){
				if(temp[k]!=1){
					check = false;
					break;
				}
			}
			if(check){
				curr += d[j];
			}
		}
		res.pb(curr);
	}
	sort(allr(res));
	rep(i,0,k)
		cout<<res[i]<<" ";
	cout<<"\n";
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
