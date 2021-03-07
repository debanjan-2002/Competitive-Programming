#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string in1,in2;
		cin>>in1>>in2;
		int temp,temp1,temp2;
		if(in2=="PM" && stoi(in1.substr(0,2))!=12){
			temp=stoi(in1.substr(0,2)+in1.substr(3))+1200;
		}
		else if(in2=="PM" && stoi(in1.substr(0,2))==12){
			temp=stoi(in1.substr(0,2)+in1.substr(3));
		}
		else if(in2=="AM" && stoi(in1.substr(0,2))!=12){
			temp=stoi(in1.substr(0,2)+in1.substr(3));
		}
		else{
			temp=stoi(in1.substr(3));
		}

		int n;
		cin>>n;
		for(int i=1;i<=n;i++){
			string op1,op2,op3,op4;
			cin>>op1>>op2>>op3>>op4;
			if(op2=="PM" && stoi(op1.substr(0,2))!=12){
				temp1=stoi(op1.substr(0,2)+op1.substr(3))+1200;
			}
			else if(op2=="PM" && stoi(op1.substr(0,2))==12){
				temp1=stoi(op1.substr(0,2)+op1.substr(3));
			}
			else if(op2=="AM" && stoi(op1.substr(0,2))!=12){
				temp1=stoi(op1.substr(0,2)+op1.substr(3));
			}
			else{
				temp1=stoi(op1.substr(3));
			}
			if(op4=="PM" && stoi(op3.substr(0,2))!=12){
				temp2=stoi(op3.substr(0,2)+op3.substr(3))+1200;
			}
			else if(op4=="PM" && stoi(op3.substr(0,2))==12){
				temp2=stoi(op3.substr(0,2)+op3.substr(3));
			}
			else if(op4=="AM" && stoi(op3.substr(0,2))!=12){
				temp2=stoi(op3.substr(0,2)+op3.substr(3));
			}
			else{
				temp2=stoi(op3.substr(3));
			}
			if(temp>=temp1 && temp<=temp2)
				cout<<1;
			else
				cout<<0;
		}
		cout<<"\n";
	}
}