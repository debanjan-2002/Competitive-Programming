#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long a,b;
        cin>>a>>b;
        long count1_even=0;
        long count1_odd=0;
        long count2_even=0;
        long count2_odd=0;
        for(long i=1;i<=a;i+=2){
            count1_odd+=1;
        }
        count1_even=a-count1_odd;
        for(long i=1;i<=b;i+=2){
            count2_odd+=1;
        }
        count2_even=b-count2_odd;
        long ans1=count1_odd*count2_odd;
        long ans2=count1_even*count2_even;
        cout<<ans1+ans2<<endl;
    }
}