#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("/home/naman/CP/cf1/input.txt", "r", stdin);
	freopen("/home/naman/CP/cf1/output.txt", "w", stdout);
	#endif
	ll test;
	ll maxcount=0;
	cin>>test;
	while(test>0){
		ll n, x, sum=0;
		cin>>n>>x;
		bool a=false;
		ll arr[n];
		for(ll i=0;i<n;i++){
			cin>>arr[i];
			if(arr[i]%x!=0)
				a=true;
			sum+=arr[i];
		}
		if(a==false)
			cout<<"-1";
		else if(sum%x!=0)
			cout<<n;
		else{
			ll innersum=0;
			ll count=0;
			for(ll i=0;i<n;){
				ll innersum=0;
				for(ll j=i+1;j<n;j++){
				if((arr[j]+innersum)%x!=0){
					// cout<<arr[i];
					count+=1;
					innersum+=arr[j];
					if(maxcount<count){
						maxcount=count;
					}
				}
				else{
					break;
				}

				}
				// if((arr[i]+innersum)%x!=0){
				// 	cout<<arr[i];
				// 	count+=1;
				// 	innersum+=arr[i];
				// 	if(maxcount<count){
				// 		maxcount=count;
				// 	}
				// }
				// else{
				// 	innersum=0;
				// }
				// // cout<<"Hello";
			}
		}
cout<<maxcount;
test=test-1;
}
}