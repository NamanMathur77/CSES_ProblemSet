#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	// #ifndef ONLINE_JUDGE
	// freopen("/home/naman/CP/problem11/input.txt", "r", stdin);
	// freopen("/home/naman/CP/problem11/output.txt", "w", stdout);
	// #endif
	ll test;
	cin>>test;
	while(test){
		ll a,b;
		cin>>a>>b;
		if(a<b){
			ll temp=a;
			a=b;
			b=temp;
		}
		if(a>2*b){
			cout<<"NO"<<"\n";
		}
		else{
			a=a%3;
			b=b%3;
			if((a==0 && b==0) || (a==2 && b==1) || (a==1 && b==2)){
				cout<<"YES"<<"\n";
			}
			else{
				cout<<"NO"<<"\n";
			}
		}

		test-=1;
	}
}