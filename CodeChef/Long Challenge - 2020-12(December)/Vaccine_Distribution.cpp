#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        vector <int> arr;
        for(int i=0;i<n;i++){
            int input;
            cin>>input;
            arr.push_back(input);
        }
        if(d==1){
            cout<<n<<endl;
        }
        else{
            vector <int> risk;
            vector <int> not_risk;
            for(int i=0;i<n;i++){
                if(arr[i]<=9 || arr[i]>=80){
                    risk.push_back(arr[i]);
                }
                else{
                    not_risk.push_back(arr[i]);
                }
            }
            int ans=0;
            ans+=(risk.size()/d);
            ans+=(not_risk.size()/d);
            if(risk.size()%d!=0)
            ans+=1;
            if(not_risk.size()%d!=0)
            ans+=1;
            cout<<ans<<endl;
        }
    }
}