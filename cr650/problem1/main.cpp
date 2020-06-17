#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("/home/naman/CP/cr650/problem1/input.txt", "r", stdin);
	freopen("/home/naman/CP/cr650/problem1/output.txt", "w", stdout);
	#endif
	ll test;
	cin>>test;
	while(test){
		ll n;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++)
			cin>>a[i];
		ll swap_count=0;
		for(ll i=0;i<n;i++){
			ll smallest_index=i;
			ll smallest=a[i];
			for(ll j=i+1;j<n;j++){
				if(a[j]<a[i]){
					smallest_index=j;
					smallest=a[j];
				}
			}
			if(smallest_index!=i){
				
				swap_count+=1;
			}
		}
		cout<<swap_count;
		test-=1;
}
}