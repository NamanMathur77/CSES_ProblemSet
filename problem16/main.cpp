#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	// #ifndef ONLINE_JUDGE
	// freopen("/home/naman/CP/problem16/input.txt", "r", stdin);
	// freopen("/home/naman/CP/problem16/output.txt", "w", stdout);
	// #endif
	ll n,k;
	cin>>n>>k;
	ll arr[n];
	for(ll i=0;i<n;i++)
		cin>>arr[i];
	sort(arr, arr+n);
	ll i=0;
	ll j=n-1;
	ll count=0;
	while(i<j){
		if(arr[i]+arr[j]<=k){
			i+=1;
			j-=1;
			count+=1;
		}
		else{
			j-=1;
			count+=1;
		}
	}
	if(i==j)
		count=count+1;
	cout<<count;

}