#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pob pop_back
#define read(x) float x; cin>>x
#define reads(x) string x; cin>>x
#define str to_string
#define rep(i,a,b) for(ll i=a; i<b; i++)
#define all(v) v.begin(),v.end()
#define allr(v) v.begin(),v.end(),greater<int>()
#define fastI_O ios_base::sync_with_stdio(false);cin.tie(NULL)
const int N = 1e9 +7;
using namespace std;

float round_2(float var){
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}

void solve(){
	read(k1);
	read(k2);
	read(k3);
	read(v);
	float temp = 100/(k1*k2*k3*v);
	temp = round_2(temp);
	if(temp<(float)9.58)
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
