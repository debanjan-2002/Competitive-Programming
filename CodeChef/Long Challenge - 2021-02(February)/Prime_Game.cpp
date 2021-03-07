#include<bits/stdc++.h>
using namespace std;

void sieve(int n,vector <int>& isprime){
    for(long int i=2;i<=n;i++){
        if(isprime[i]==1){
            for(long j=i*i;j<=n;j+=i){
                isprime[j]=0;
            }
        }
    }
    for(int i=2;i<=n;i++){
        isprime[i]+=isprime[i-1];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    vector <int> arr(1000002,1);
    arr[0]=arr[1]=0;
    sieve(1000001,arr);
    while(t--){
        int x,y;
        cin>>x>>y;
        if(arr[x]<=y)
            cout<<"Chef"<<"\n";
        else
            cout<<"Divyam"<<"\n";

    }
}