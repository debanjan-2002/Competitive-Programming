#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long a,y,x;
	    cin>>a>>y>>x;
	    if(a>=y){
	        cout<<x*y<<"\n";
	    }
	    else{
	        cout<<x*a + 1<<"\n";
	    }
	}
	return 0;
}
