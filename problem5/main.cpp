#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	// #ifndef ONLINE_JUDGE
	// freopen("/home/naman/CP/problem5/input.txt", "r", stdin);
	// freopen("/home/naman/CP/problem5/output.txt", "w", stdout);
	// #endif

	ll n;
	cin>>n;
	if(n==1)
		cout<<"1";
	else if(n==2 || n==3){
		cout<<"NO SOLUTION";
	}
	else{
		vector<ll> even;
		vector<ll> odd;
		for(ll i=1;i<=n;i++){
			if(i%2==0){//even
				even.push_back(i);
			}
			else{
				odd.push_back(i);
			}
		}
			for (ll i: even)
				cout<<i<<" ";
			for(ll i: odd)
				cout<<i<<" ";
	}


}