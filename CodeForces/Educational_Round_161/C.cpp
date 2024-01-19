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
	read(n);
	input(v, n);
	read(m);

	vector<ll> prefix(n);
	vector<ll> suffix(n);

	rep(i, 1, n) {
		prefix[i] = prefix[i - 1];
		if(i == 1 || v[i] - v[i - 1] < v[i - 1] - v[i - 2]) prefix[i]++;
		else prefix[i] += (v[i] - v[i - 1]);	
	}
	repr(i, n - 2, 0) {
		suffix[i] = suffix[i + 1];
		if(i == n - 2 || v[i + 1] - v[i] < v[i + 2] - v[i + 1]) suffix[i]++;
		else suffix[i] += (v[i + 1] - v[i]);
	}
	
	rep(i, 0, m) {
		read(s);
		read(d);

		s--;
		d--;

		if(s < d) cout << prefix[d] - prefix[s] << "\n";
		else cout << suffix[d] - suffix[s] << "\n"; 
	}
}

int main(){
	fastIO;
	ll t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}