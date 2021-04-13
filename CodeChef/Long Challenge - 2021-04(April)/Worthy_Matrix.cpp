#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int M = 1e5+10;
const int N = 1e3+10;
long arr[N][M];
long prefix[N][M];

int main(){
    int t;
    cin>>t;
    // vector <vector<long>> arr;
    // vector <vector<long>> prefix;
    while(t--){
        long n,m,k;
        cin>>n>>m>>k;

        for(long i=1;i<=n;i++){
            for(long j=1;j<=m;j++){
                cin>>arr[i][j];
                prefix[i][j] = arr[i][j] + prefix[i][j-1] +prefix[i-1][j] - prefix[i-1][j-1];
            }
        }
        long ans = 0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(n-j+1<i)
                    break;
                long low = 1;
                long high = m-i+1;
                long index = INT_MAX;
                while(low<=high){
                    long mid = low +(high-low)/2;
                    long c = j + i -1;
                    long d = mid + i -1;
                    long sum = prefix[c][d] - prefix[j-1][d] - prefix[c][mid-1] +prefix[j-1][mid-1];
                    double avg = (double)sum/(i*i);
                    if(avg>=k){
                        index = min(index,mid);
                        high = mid-1;
                    }
                    else{
                        low=mid+1;
                    }
                }
                if(index == INT_MAX)
                    continue;
                ans += (m-index-i+2);
            }            
        }
        cout<<ans<<"\n";
    }
}


