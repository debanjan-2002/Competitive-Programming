#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pob pop_back
#define mk make_pair
#define deb(x) cout<< #x <<" = "<<x<<"\n"
#define deb2(x,y) cout<< #x <<" = "<<x<<","<< #y <<" = "<<y<<"\n"
#define read(x) long long x; cin>>x
#define reads(x) string x; cin>>x
#define str to_string
#define rep(i,a,b) for(ll i=a; i<b; i++)
#define repr(i,a,b) for(ll i=a; i>=b; i--)
#define repj(i,a,b,c) for(ll i=a; i<b; i+=c)
#define tr(it,a) for(auto it = a.begin(); it != a.end(); it++)
#define input(v,n) vector <ll> v(n); rep(i,0,n) cin>>v[i];
#define output(v) rep(i,0,n) cout<<v[i]<<" "; cout<<"\n"
#define all(v) v.begin(),v.end()
#define allr(v) v.begin(),v.end(),greater<ll>()
#define PI 3.1415926535897932384626
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL)
const int N = 1e9 +7;
using namespace std;

ll power(ll base,ll ex);
ll extended_gcd(ll a,ll b,ll &x,ll &y); 

void solve(){
    read(n);
    input(v,n);
    if(n > 4){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    rep(i,0,n){
        if(i%4 == 0){
            cout<<v[i]<<" 0\n";
        }
        else if(i%4 == 1){
            cout<<"0 "<<v[i]<<"\n";
        }
        else if(i%4 == 2){
            cout<<-v[i]<<" 0\n";
        }
        else{
            cout<<"0 "<<-v[i]<<"\n";
        }
    }
}

int main(){
    fastIO;
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