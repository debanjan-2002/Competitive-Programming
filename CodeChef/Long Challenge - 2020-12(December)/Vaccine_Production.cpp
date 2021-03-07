#include<bits/stdc++.h>
using namespace std;

int min(int d1,int d2){
    if(d1>d2){
        return d2;
    }
    return d1;
}
int main(){
    int d1,d2,v1,v2,p;
    cin>>d1>>v1>>d2>>v2>>p;
    int total=0;
    int day=min(d1,d2)-1;
    if(d2>d1){
        while(d1<d2 && total<p){
            total+=v1;
            d1++;
            day++;
        }
        if(total==p){
            cout<<day<<endl;
        }
        else{
            while(total<p){
                total+=(v1+v2);
                day++;
            }
            cout<<day<<endl;
        }
    }
    else if(d1>d2){
        while(d1>d2 && total <p){
            total+=v2;
            d2++;
            day++;
        }
        if(total==p){
            cout<<day<<endl;
        }
        else{
            while(total<p){
                total+=(v1+v2);
                day++;
            }
            cout<<day<<endl;
        }
    }
    else{
        while(total<p){
            total+=(v1+v2);
            day++;
        }
        cout<<day<<endl;
    }
}