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

void reverse(vector <ll>& arr,ll low, ll high){
    while(low < high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

void rotate(vector <ll>& arr, ll n, ll index){
    reverse(arr,0,index-1);
    reverse(arr,index,n-1);
    reverse(arr,0,n-1);
}

void solve(){
    read(n);
    input(a,n);
    input(b,n);
    ll temp = INT_MAX;
    rep(i,0,n){
        if((a[0] + b[i]) % n < temp){
            temp = (a[0] + b[i]) % n;
        }
    }
    vector <ll> idx;
    rep(i,0,n){
        if((a[0] + b[i]) % n == temp){
            idx.pb(i);
        }
    }
    vector <ll> temp1(n);
    vector <ll> temp2(n);
    vector <ll> temp_b;
    temp_b = b;
    // cout<<ele;
    rotate(temp_b,b.size(),idx[0]);
    // for(int i=0; i<n; i++)
    //     cout<<b[i]<<" ";
    rep(i,0,n){
        temp1[i] = (a[i] + temp_b[i]) % n;
    }
    if(idx.size() == 1){
        rep(i,0,n)
            cout<<temp1[i]<<" ";
        cout<<"\n";
        return;
    }
    else{
        temp_b = b;
        rotate(temp_b,b.size(),idx[1]);
        rep(i,0,n)
            temp2[i] = (a[i] + temp_b[i]) % n;
    }
    bool first = false;
    bool second = false;
    rep(i,0,n){
        if(temp1[i] < temp2[i]){
            first = true;
            break;
        }
        else if(temp1[i] > temp2[i]){
            second = true;
            break;
        }
    }
    if(first){
        rep(i,0,n)
            cout<<temp1[i]<<" ";
    }
    else{
        rep(i,0,n)
            cout<<temp2[i]<<" ";
    }
    cout<<"\n";

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