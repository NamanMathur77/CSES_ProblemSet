#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	// #ifndef ONLINE_JUDGE
	// freopen("/home/naman/CP/problem15/input.txt", "r", stdin);
	// freopen("/home/naman/CP/problem15/output.txt", "w", stdout);
	// #endif
	ll n,m,k;
	cin>>n>>m>>k;
	ll a[n];
	ll b[m];
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	for(ll i=0;i<m;i++){
		cin>>b[i];
	}
	sort(a, a+n);
	sort(b, b+m);
	ll i=0;
	ll j=0;
	ll c=0;
	while(i<n &&j<m){
		if(b[j]<a[i]-k)
			j+=1;
		else if(a[i]<b[j]-k)
			i+=1;
		else{
			i+=1;
			j+=1;
			c+=1;
		}
	}
	cout<<c;


}