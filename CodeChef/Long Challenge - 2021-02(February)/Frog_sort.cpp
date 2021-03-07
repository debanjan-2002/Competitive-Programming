#include<bits/stdc++.h>
using namespace std;

int getIndex(vector <int> v,int target){
    auto it =find(v.begin(),v.end(),target);
    if(it!=v.end()){
        int index=it-v.begin();
        return index;
    }
    return -1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> weight(n);
        vector <int> jump(n);
        vector <int> sorted(n);
        vector <int> curr_pos(n);
        int ans=0;
        for(int i=0;i<n;i++){
            curr_pos[i]=i;
        }
        for(int i=0;i<n;i++){
            cin>>weight[i];
            sorted[i]=weight[i];
        }
        for(int i=0;i<n;i++){
            cin>>jump[i];
        }
        sort(sorted.begin(),sorted.end());
        for(int i=1;i<n;i++){
            int curr_idx= getIndex(weight,sorted[i]);
            int prev_idx=curr_pos[getIndex(weight,sorted[i-1])];
            int temp=curr_idx;
            while(temp<=prev_idx){
                temp+=jump[curr_idx];
                curr_pos[curr_idx]=temp;
                ans++;
            }

        }
        cout<<ans<<endl;
    }
}