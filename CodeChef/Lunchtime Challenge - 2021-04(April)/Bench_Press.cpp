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
	read(w);
	read(wr);
	vector <ll> v(n);
	bool check = true;
	rep(i,0,n){
		cin>>v[i];
		if(v[i] != 1)
			check = false;
	}
	if(wr >= w){
		cout<<"YES\n";
	}
	else if(check && (n&1)!=0)
		cout<<"NO\n";
	else if(check && (n&1)==0){
		if(wr + n >=w)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	else{
		bool flag = false;
		sort(all(v));
		ll right = 0;
		ll left = 0;
		int i = 0;
		while(i < n){
			right += v[i];
			i++;
			left += v[i];
			i++;
			if(right == left){
				ll temp = wr + (right*2);
				if(temp >= w){
					flag = true;
					break;
				}
			}
		}
		if(flag)
			cout<<"YES\n";
		else
			cout<<"NO\n";
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
	cin>>t;
	while(t--){
		solve();
	}
	
}
