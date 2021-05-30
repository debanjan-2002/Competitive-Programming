#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pob pop_back
#define read(x) long long x; cin>>x
#define reads(x) string x; cin>>x
#define str to_string
#define rep(i,a,b) for(ll i=a; i<b; i++)
#define reps(i,a,b,c) for(ll i=a; i<b; i+=c)
#define all(v) v.begin(),v.end()
#define allr(v) v.begin(),v.end(),greater<ll>()
#define fastI_O ios_base::sync_with_stdio(false);cin.tie(NULL)
const int N = 1e9 +7;
using namespace std;

ll power(ll base,ll ex);
ll extended_gcd(ll a,ll b,ll &x,ll &y); 

void solve(){
	read(g);
	read(p);
	vector <ll> v(11);
	ll amin = 0;
	ll amax = 0;
	rep(i,1,11){
		cin>>v[i];
	}
	ll temp = 0;
	for(ll i = 10; i > g; i--){
		temp += v[i]/p;
		v[i-1] += v[i]%p;

	}
	amax += temp;
	amin += (++temp);
	amax += v[g]/p;
	if(v[g]%p)
		amax++;
	cout<<amin<<" "<<amax<<"\n";
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

ll extended_gcd(ll a,ll b,ll &x,ll &y){
	if(b == 0){
		x = 1;
		y = 0;
		return a;
	}
	ll x1,y1;
	ll d = extended_gcd(b,a % b,x1,y1);
	x = y1;
	y = x1 - y1*(a/b);
	return d;
}

ll power(ll base,ll ex){
	if(base == 0)
		return 0;
	if(ex == 0)
		return 1;
	ll y;
	if((ex & 1) == 0){
		y = power(base,ex/2);
		y = (y * y) % N;
	}
	else{
		y = base % N;
		y = (y * power(base,ex-1) % N) % N;
	}
	return (y+N)%N;
}
