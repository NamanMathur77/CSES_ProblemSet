#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll test;
	cin>>test;
	while(test>0){
		ll n, x;
		cin>>n>>x;
		ll arr[n];
		for(ll i=0;i<n;i++)
			cin>>arr[i];
		ll maxsum=0;
		ll len=0;
		for(ll i=0;i<n;i++){
			ll sum=arr[i];
			for(ll j=i+1;j<n;j++){
				sum=sum+arr[j];
				if(sum%x!=0){
					if(sum>maxsum){
						maxsum=sum;
						len=j-i;
					}
				}
				else{
					break;
				}
			}
		}
	if(len==0)
		cout<<"-1";
	else
		cout<<len+1<<"\n";
test=test-1;
}
}
