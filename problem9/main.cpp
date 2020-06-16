#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll power(ll a, ll b){
	ll ans=1;
	for(ll i=0;i<b;i++) ans=ans*a % 1000000007;
		return ans;
}

int main(){
	// #ifndef ONLINE_JUDGE
	// freopen("/home/naman/CP/problem9/input.txt", "r", stdin);
	// freopen("/home/naman/CP/problem9/output.txt", "w", stdout);
	// #endif
	ll n;
	cin>>n;
	ll res=power(2,n);
	cout<<res;
}