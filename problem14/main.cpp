#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	// #ifndef ONLINE_JUDGE
	// freopen("/home/naman/CP/problem14/input.txt", "r", stdin);
	// freopen("/home/naman/CP/problem14/output.txt", "w", stdout);
	// #endif
	ll n;
	cin>>n;
	// cout<<n;
	ll arr[n];
	for(ll i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	// for(ll i=0;i<n;i++){
	// 	cout<<arr[i];
	// }
	ll count=0;
	for(ll i=0;i<n-1;i++){
		if(arr[i]!=arr[i+1]){
			count+=1;
		}
	}
	cout<<count+1;
}