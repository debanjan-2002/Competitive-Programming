#include <bits/stdc++.h>
using namespace std;

string encode(string s,string temp){

     if(s.length()==1){
        if(s=="0"){
            return temp.substr(0,1);
        }
        else{
            return temp.substr(1);
        }
    }

    string temp1=temp.substr(0,(temp.length()/2));
    string temp2=temp.substr(temp.length()/2);
   
    if(s[0]=='0'){
        return encode(s.substr(1),temp1);
    }
    else{
        return encode(s.substr(1),temp2);
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    string temp="abcdefghijklmnop";
	    string ans="";
	    for(int i=0;i<(n/4);i++){
	        ans=ans+encode(s.substr(0,4),temp);
	        s=s.substr(4);
	    }
	    cout<<ans<<endl;
	}
	return 0;
}