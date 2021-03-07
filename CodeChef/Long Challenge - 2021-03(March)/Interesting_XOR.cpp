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

ll binTodec(string bin){
	ll power = pow(2,bin.length()-1);
	ll dec=0;
	while(power>0){
		dec= dec+(power*stoi(bin.substr(0,1)));
		power/=2;
		bin= bin.substr(1);
	}
	return dec;
}
void solve(){
	read(c);
	ll temp=c;
	string s1="";
	string s2="";
	while(temp>0){
		if((temp&1)==0){
			s1.insert(0,1,'1');
			s2.insert(0,1,'1');
			temp=temp/2;
		}
		else{
			if(temp==1){
				s1.insert(0,1,'1');
				s2.insert(0,1,'0');
			}
			else{
				s1.insert(0,1,'0');
				s2.insert(0,1,'1');
			}
			temp=temp/2;
		}
	}
	cout<<binTodec(s1)*binTodec(s2)<<"\n";
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