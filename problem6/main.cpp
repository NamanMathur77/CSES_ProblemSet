#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	// #ifndef ONLINE_JUDGE
	// freopen("/home/naman/CP/problem6/input.txt", "r", stdin);
	// freopen("/home/naman/CP/problem6/output.txt", "w", stdout);
	// #endif
	ll test;
	cin>>test;
	while(test>0){
		ll a;
		ll b;
		cin>>a;
		cin>>b;
		if(a>b){
			ll res;
			if(a%2==0){
				ll n=a*a;
				ll res=n-(b-1);
				cout<<res<<"\n";
			}
			else{
				ll n=(a-1)*(a-1);
				n=n+1;
				res=n+b-1;
				cout<<res<<"\n";
			}
		}
		else{
			ll res;
			if(b%2!=0){
				ll n=b*b;
				ll res=n-(a-1);
				cout<<res<<"\n";
			}
			else{
				ll n=(b-1)*(b-1);
				n=n+1;
				ll res=n+a-1;
				cout<<res<<"\n";
			}
		}


		test-=1;
	}
}