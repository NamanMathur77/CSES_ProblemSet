#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	// #ifndef ONLINE_JUDGE
	// freopen("/home/naman/CP/problem7/input.txt", "r", stdin);
	// freopen("/home/naman/CP/problem7/output.txt", "w", stdout);
	// #endif
	ll n;
	cin>>n;
	for(ll i=1;i<=n;i++){
		ll a=(i*i)*(i*i-1)/2;
		ll b=4*(i-1)*(i-2);

		cout<<a-b<<"\n";
	}
}