#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pob pop_back
#define read(x) long long x; cin>>x
#define reads(x) string x; cin>>x
#define str to_string
#define rep(i,a,b) for(int i=a; i<b; i++)
#define all(v) v.begin(),v.end()
#define allr(v) v.begin(),v.end(),greater<int>()
#define fastI_O ios_base::sync_with_stdio(false);cin.tie(NULL)
const int N = 1e9 +7;
using namespace std;

void solve(){
	read(n);
	vector <int> input(n+1);
	ll current_sum=0;
	rep(i,1,n+1){
		cin>>input[i];
		current_sum+=input[i];
	}
	ll actual_sum = (n*(n+1))/2;
	ll diff = actual_sum - current_sum;
	bool check= false;
	sort(all(input));
	rep(i,1,n+1){
		if(input[i]>i){
			check = true;
			break;
		}
	}
	if(check || (diff&1)==0)
		cout<<"Second"<<"\n";
	else
		cout<<"First"<<"\n";
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