#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long arr[n];
	    long min_ele = INT_MAX;
	    long max_ele = INT_MIN;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]>max_ele)
	            max_ele=arr[i];
	        else if(arr[i]<min_ele)
	            min_ele=arr[i];
	    }
	    long ans=(max_ele-min_ele)*2;
	    cout<<ans<<endl;
	}
	return 0;
}
