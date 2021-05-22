#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pob pop_back
#define read(x) long long x; cin>>x
#define reads(x) string x; cin>>x
#define str to_string
#define rep(i,a,b,c) for(ll i=a; i<b; i+=c)
#define all(v) v.begin(),v.end()
#define allr(v) v.begin(),v.end(),greater<ll>()
#define fastI_O ios_base::sync_with_stdio(false);cin.tie(NULL)
const int N = 1e9 +7;
using namespace std;

ll power(ll base,ll ex);
ll extended_gcd(ll a,ll b,ll &x,ll &y); 

void solve(){
	read(n);
	read(m);
	ll ans = 0;
	if(n > m){
		ans += (n-m)*(n-m-1)/2;
		ans += (n-m);
		ans += (n-m)*(m-1);
		vector <ll> remainder_arr(n+1,1);
		/*This array contains the remainder values which
	  	  already came before */
		rep(i,2,m+1,1){
			ll temp = m % i;
			ans += remainder_arr[temp];
			/* remainder_arr[temp] will contain number of values 
		   	   before i, such that (m % i) is equal to temp (index) */  
			rep(j,temp,m+1,i)
				remainder_arr[j]++;
				/* Increasing the count of the remainders
				   which already occured before */
		}
	}
	else{
		vector <ll> remainder_arr(n+1,1);
		/*This array contains the remainder values which
	  	  already came before */
		rep(i,2,n+1,1){
			ll temp = m % i;
			ans += remainder_arr[temp];
			/* remainder_arr[temp] will contain number of values 
		   	   before i, such that (m % i) is equal to temp (index) */  
			rep(j,temp,n+1,i)
				remainder_arr[j]++;
				/* Increasing the count of the remainder
				   which already occured before */
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

int main(){
	fastI_O;
	init_code();
	int t=1;
	cin>>t;
	while(t--){
		solve();
	}
	
}
