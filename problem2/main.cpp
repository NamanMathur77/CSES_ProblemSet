#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	// #ifndef ONLINE_JUDGE
	// freopen("/home/naman/CP/problem2/input.txt", "r", stdin);
	// freopen("/home/naman/CP/problem2/output.txt", "w", stdout);
	// #endif
	ll n;
	cin>>n;
	ll arr[n];
	ll check[n+1];
	for(ll i=0;i<=n;i++)
		check[i]=0;
	// cout<<"printing of check";
	// for(ll i=0;i<=n;i++)
	// 	cout<<check[i];
	for(ll i=0;i<n;i++){
		int num;
		cin>>num;
	    check[num]=1;
	}
	// for(ll i=0;i<=n;i++)
	// 	cout<<check[i];
	for(ll i=1;i<=n;i++){
		if(check[i]==0){
			cout<<i;
		}
	}


	}