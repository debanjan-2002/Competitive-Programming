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
const int N = 1e5 + 5;
using namespace std;

ll power(ll base,ll ex);
ll extended_gcd(ll a,ll b,ll &x,ll &y); 

vector <pair<ll,vector<ll>>> v(N);

ll factors(ll n,vector <ll>& v){
    ll f = 0;
    vector <ll> temp;
    for(ll i=1; i<=sqrt(n); i++){
        if(n % i == 0){
            if(n / i == i){
                v.pb(i);
                f++;
            }
            else{
                v.pb(i);
                temp.pb(n/i);
                f += 2;
            }
        }
    }
    repr(i,temp.size()-1,0){
        v.pb(temp[i]);
    }
    v.pob();
    return --f;
}

void solve(){
    read(n);
    ll ans = 0;
    // deb(v[n].first);
    // rep(i,0,v[n].second.size())
    // cout<<v[n].second[i]<<" ";
    repr(i,n,2){
        ans += v[i].first;
        // deb(v[i].first);
        ll temp = -1;
        ll low = 0;
        ll high = v[i].second.size() - 1;
        while(low <= high){
            ll mid = (low + high)/2;
            if(v[i].second[mid] + i <= n){
                temp = mid;
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
        if(temp != -1){
            rep(j,0,temp+1){
                ll excess = v[i].second[j];
                excess = n - excess;
                ans += (excess/i + 1);
            }
            ans -= (temp + 1);
        }
    }
    cout<<ans<<"\n";
}

int main(){
    fastIO;
    int t=1;
    cin>>t;
    rep(i,2,N){
        vector <ll> temp;
        ll fact = factors(i,temp);
        v[i].first = fact;
        v[i].second = temp;
    }
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