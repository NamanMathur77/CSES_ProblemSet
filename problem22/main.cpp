#include<bits/stdc++.h>
using namespace std;
using ii = tuple<long, long>;
typedef long long ll;
int main(){
	// #ifndef ONLINE_JUDGE
	// freopen("/home/naman/CP/problem22/input.txt", "r", stdin);
	// freopen("/home/naman/CP/problem22/output.txt", "w", stdout);
	// #endif
	ll n;
	cin>>n;
	vector<ll> v;
	for(ll i=0;i<n;i++){
		ll a;
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	ll max=v[n/2];
	ll count=0;
	for(auto x:v){
		count+=abs(x-max);
	}
	cout<<count;

}