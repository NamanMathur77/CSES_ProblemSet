#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	// #ifndef ONLINE_JUDGE
	// freopen("/home/naman/CP/problem4/input.txt", "r", stdin);
	// freopen("/home/naman/CP/problem4/output.txt", "w", stdout);
	// #endif
	ll n;
	cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++){
		cin>>arr[i];
	}
	ll count=0;
	for(ll i=1;i<n;i++){
		if(arr[i]<arr[i-1]){
			ll diff=arr[i-1]-arr[i];
			arr[i]=arr[i]+diff;
			count+=diff;
		}
	}
	cout<<count;
}