#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k; //taking the inputs
        if(n==k){  //if n and k are equal, obviously all numbers are +ve
            for(int i=0;i<n;i++){
                cout<<(i+1)<<' ';
                cout<<endl;
            }
        }
        else{
            int arr[n];
            if(n%2!=0){  // if n is odd
                for(int i=0;i<n;i++){
                    arr[i]=(i+1)*pow(-1,i+2); //making sequence 1 -2 3 -4 5 (ex)
                }
            }
            else{ // if n is even
                for(int i=0;i<n;i++){
                    arr[i]=(i+1)*pow(-1,i+1); // equal +ve and equal -ve and also alternate
                }
            }
            int sum=1,count,diff=0; //sum of first digit that is 1 is going to be 1
            count=ceil((double)n/2); //counting no. of positive 
            for(int i=1;i<n;i++){
                sum+=arr[i]; //calculating sum of each number in array
                if(sum>0){
                    if(count<k){ //If no of +ve is less than required 'k'
                        diff=k-count; //how many no are less than the required
                        for(int j=n-1;j>=0;j--){
                            if(arr[j]<0){
                                arr[j]=arr[j]*(-1); //changing +ve and -ve
                                count++;
                                if(count==k)
                                break;
                            }
                        }
                    }
                    else if(count>k){ // +ve is more than required
                        diff=count-k; // how much more
                        for(int j=n-1;j>=0;j--){
                            if(arr[j]>0){
                                arr[j]=arr[j]*(-1); //changing +ve and -ve
                                count--;
                                if(count==k)
                                break;
                            }
                        }
                    }
                }
            }
            for(int i=0;i<n;i++)
            cout<<arr[i]<<' ';
            cout<<"\n";
        }
    }
}