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
	vector <vector <char>> v;
	bool under = false;
	ll x = 0;
	ll o = 0;
	rep(i,0,3){
		vector <char> temp;
		rep(j,0,3){
			char c;
			cin>>c;
			if(c == 'X')
				x++;
			else if(c == 'O')
				o++;
			else
				under = true;
			temp.pb(c);
		}
		v.pb(temp);
	}
	bool first = false;
	bool second = false;
	// Row-check
	rep(i,0,3){
		if(v[i][0] == 'X' && v[i][1] == 'X' && v[i][2] == 'X')
			first = true;
		else if(v[i][0] == 'O' && v[i][1] == 'O' && v[i][2] == 'O')
			second = true;
	}
	// Column-check
	rep(i,0,3){
		if(v[0][i] == 'X' && v[1][i] == 'X' && v[2][i] == 'X')
			first = true;
		else if(v[0][i] == 'O' && v[1][i] == 'O' && v[2][i] == 'O')
			second = true;
	}
	// Diagonal-check
	if(v[0][0] == 'X' && v[1][1] == 'X' && v[2][2] == 'X')
		first = true;
	else if(v[0][0] == 'O' && v[1][1] == 'O' && v[2][2] == 'O')
		second = true;
	if(v[0][2] == 'X' && v[1][1] == 'X' && v[2][0] == 'X')
		first = true;
	else if(v[0][2] == 'O' && v[1][1] == 'O' && v[2][0] == 'O')
		second = true;

	if((first && second) || (x-o > 1) || (o>x))
		cout<<3<<"\n";
	else if((first && x<=o) || (second && x!=o))
		cout<<3<<"\n";
	else{
		if((!first && second) || (first && !second))
			cout<<1<<"\n";
		else if(!first && !second && !under)
			cout<<1<<"\n";
		else if(!first && !second && under)
			cout<<2<<"\n";
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
