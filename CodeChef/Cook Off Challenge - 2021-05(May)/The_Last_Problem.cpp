#include<bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
int arr[N][N];
int main(){

    int diff_r = 1;
	for(int i = 1; i < N; i++){
		int diff_c = i;
		arr[i][1] = arr[i-1][1] + diff_r;
		diff_r++;
		for(int j = 2; j < N; j++){
			arr[i][j] = arr[i][j-1] + diff_c;
			diff_c++;
		}
	}
    int t;
    cin>>t;
    while(t--){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int ans = 0;
        if(x1 == x2 && y1 == y2){
			cout<<0<<"\n";
        }
        else if(x1 == x2){
            for(int i = y1; i <= y2; i++)
                ans += arr[x1][i];
            cout<<ans<<"\n";
        }
        else if(y1 == y2){
            for(int i = x1; i <= x2; i++)
                ans += arr[i][y1];
            cout<<ans<<"\n";
        }
        else{
            for(int i = x1; i <= x2; i++)
                ans += arr[i][y1];
            for(int i = y1; i <= y2; i++)
                ans += arr[x2][i];
            ans -= arr[x2][y1];
            cout<<ans<<"\n";
        }
    }
}