#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    long k,d;
	    cin>>n>>k>>d;
	    int arr[n];
	    int sum=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        sum+=arr[i];
	    }
	    int temp=sum/k;
	    if(temp>=d){
	        cout<<d<<endl;
	    }
	    else{
	        cout<<temp<<endl;
	    }
	}
	return 0;
}