#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long n,k,x,y;
        cin>>n>>k>>x>>y;
        if(x==y){
            cout<<n<<' '<<n<<endl;
        }
        else if(x>y){
            long x_first=n;
            long y_first=n+y-x;
            long x_third=0;
            long y_third=x-y;
            if(k%4==1){
                cout<<x_first<<' '<<y_first<<endl;
            }
            else if(k%4==2){
                cout<<y_first<<' '<<x_first<<endl;
            }
            else if(k%4==3){
                cout<<x_third<<' '<<y_third<<endl;
            }
            else{
                cout<<y_third<<' '<<x_third<<endl;
            }
        }
        else{
            long x_first=x+n-y;
            long y_first=n;
            long x_third=y-x;
            long y_third=0;
            if(k%4==1){
                cout<<x_first<<' '<<y_first<<endl;
            }
            else if(k%4==2){
                cout<<y_first<<' '<<x_first<<endl;
            }
            else if(k%4==3){
                cout<<x_third<<' '<<y_third<<endl;
            }
            else{
                cout<<y_third<<' '<<x_third<<endl;
            }
        }
    }
}