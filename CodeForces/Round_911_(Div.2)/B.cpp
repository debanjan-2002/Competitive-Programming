#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define pob pop_back
#define read(x) long long x; cin >> x;
#define reads(s) string s; cin >> s;
#define rep(i,a,b) for(ll i=a; i<b; i++)
#define repr(i,a,b) for(ll i=a; i>=b; i--)
#define repj(i,a,b,c) for(ll i=a; i<b; i+=c)
#define input(v,n) vector<ll> v(n); rep(i,0,n) cin >> v[i];
#define all(v) v.begin(),v.end()
#define allr(v) v.begin(),v.end(),greater<ll>()
#define deb(x) cout<< #x <<" "; _print(x); cout <<"\n"
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL)

void _print(ll t) {cout << t;}
void _print(int t) {cout << t;}
void _print(string t) {cout << t;}
void _print(char t) {cout << t;}
void _print(double t) {cout << t;}

template <class T, class V> void _print(pair <T, V> p) {cout << "{"; _print(p.ff); cout << ","; _print(p.ss); cout << "}";}
template <class T> void _print(vector <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(set <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(unordered_set <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(multiset <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T, class V> void _print(map <T, V> v) {cout << "[ "; for (auto i : v) {_print(i); cout << " ";} cout << "]";}
template <class T, class V> void _print(unordered_map <T, V> v) {cout << "[ "; for (auto i : v) {_print(i); cout << " ";} cout << "]";}
const int N = 1e9 +7;

void solve(){
	read(a);
	read(b);
	read(c);

	ll aPos = 0;
	ll bPos = 0;
	ll cPos = 0;

	if(c >= a && ((c - a) % 2) == 0) bPos = 1;
	if(a >= c && ((a - c) % 2) == 0) bPos = 1;
	if(a >= b && ((a - b) % 2) == 0) cPos = 1;
	if(b >= a && ((b - a) % 2) == 0) cPos = 1;
	if(b >= c && ((b - c) % 2) == 0) aPos = 1;
	if(c >= b && ((c - b) % 2) == 0) aPos = 1;

	cout << aPos << " " << bPos << " " << cPos << "\n";
}

int main(){
	fastIO;
	ll t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}