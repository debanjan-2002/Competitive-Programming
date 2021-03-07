// Partial Solution (Sub-Task)
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    if(n%2==0){
	        int temp=n/2;
	        cout<<arr[0]*temp<<endl;
	    }
	    else{
	        int temp=(n-1)/2;
	        cout<<(arr[0]*temp)+arr[0]<<endl;
	    }
	    t--;
	}
	return 0;
}
