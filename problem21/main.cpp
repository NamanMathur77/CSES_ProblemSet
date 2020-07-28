#include<bits/stdc++.h>
using namespace std;
using ii = tuple<long, long>;
typedef long long ll;
int main(){
	// #ifndef ONLINE_JUDGE
	// freopen("/home/naman/CP/problem21/input.txt", "r", stdin);
	// freopen("/home/naman/CP/problem21/output.txt", "w", stdout);
	// #endif
	ll n;
	cin>>n;
	vector<ll> v;
	for(ll i=0;i<n;i++){
		ll a;
		cin>>a;
		v.push_back(a);
	}
	//kadanes algorithm
	ll max_so_far = INT_MIN, max_ending_here = 0;
	for(ll i=0;i<n;i++){
		max_ending_here = max_ending_here + v[i];
		if(max_so_far < max_ending_here)
			max_so_far = max_ending_here;
		if(max_ending_here<0)
			max_ending_here = 0;
	}
	cout<<max_so_far;
}