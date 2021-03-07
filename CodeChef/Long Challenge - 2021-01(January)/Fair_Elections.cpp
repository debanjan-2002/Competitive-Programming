#include<bits/stdc++.h>
using namespace std;

int min_index(vector <int> arr){
    int min=INT_MAX;
    int idx;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<min){
            min=arr[i];
            idx=i;
        }
    }
    return idx;
}

int max_index(vector <int> arr){
    int max=-1;
    int idx;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>max){
            max=arr[i];
            idx=i;
        }
    }
    return idx;
}

int sum(vector <int> arr){
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,sum1=0,sum2=0,ans=0;
        cin>>n>>m;
        bool flag=true;
        vector <int> arr1;
        vector <int> arr2;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            arr1.push_back(temp);
            sum1+=temp;
        }
        for(int i=0;i<m;i++){
            int temp;
            cin>>temp;
            arr2.push_back(temp);
            sum2+=temp;
        }
        if(sum1>sum2){
            cout<<0<<endl;
        }
        else{
            while(sum1<=sum2){
                int min=min_index(arr1);
                int max=max_index(arr2);
                if(arr1[min]<arr2[max]){
                    int temp=arr1[min];
                    arr1[min]=arr2[max];
                    arr2[max]=temp;
                    sum1=sum(arr1);
                    sum2=sum(arr2);
                    ans+=1;
                }
                else{
                    cout<<-1<<endl;
                    flag=false;
                    break;
                }
            }
            if(flag){
                cout<<ans<<endl;
            }
        }
    }
}