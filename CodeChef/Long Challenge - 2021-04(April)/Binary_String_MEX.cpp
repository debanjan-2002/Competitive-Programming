// Only Sub-Task
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pob pop_back
#define read(x) long long x; cin>>x
#define reads(x) string x; cin>>x
#define str to_string
#define rep(i,a,b) for(ll i=a; i<b; i++)
#define all(v) v.begin(),v.end()
#define allr(v) v.begin(),v.end(),greater<int>()
#define fastI_O ios_base::sync_with_stdio(false);cin.tie(NULL)
const int N = 1e9 +7;
using namespace std;

ll binTodec(string s){
	ll temp = 0;
	ll ans = 0;
	while(s.length()!=0){
		if(s[s.length()-1]=='0'){
			temp++;
		}
		else{
			ans += pow(2,temp);
			temp++;
		}
		s = s.substr(0,s.length()-1);
	}
	return ans;
}
string decTobin(ll input){
	string ans = "";
	int binaryNum[32];
    int i = 0;
    while (input > 0) {
        binaryNum[i] = input % 2;
        input = input / 2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
    	ans += str(binaryNum[j]);
    }
    if(ans=="")
    	return "0";
	return ans;
}
void reverse(string& s){
	ll low = 0;
	ll high = s.length();
	while(low<=high){
		char temp = s[low];
		s[low] = s[high];
		s[high] = temp;
		low++;
		high--;
	}
}
void solve(){
	reads(s);
	int len = s.length();
	ll total = pow(2,len);
	vector <string> v;
	set <string> unique;
	set <ll> ans;
	rep(counter,1,total){
		string temp = "";
		rep(j,0,len){
			if((counter&(1<<j))!=0){
				temp += s[j];
			}
		}
		v.pb(temp);
	}
	rep(i,0,v.size()){
		unique.insert(v[i]);
	}
	auto it = unique.begin();
	while(it!=unique.end()){
		ll temp2 = binTodec(*it);
		ans.insert(temp2);
		it++;
	}
	auto it2 = ans.begin();
	ll a = 0;
	while(it2!=ans.end()){
		if(*it2 == a){
			a++;
			it2++;
		}
		else{
			break;
		}
	}
	string output;
	if(it2==ans.end()){
		output = decTobin(ans.size());
	}
	else{
		output = decTobin(a);
	}
	cout<<output<<"\n";
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
