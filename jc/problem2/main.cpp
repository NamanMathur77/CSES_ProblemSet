#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// ll BubbleSort(ll arr[]){
// 	ll count=0;
// 	ll n=sizeof(arr)/sizeof(arr[0]);
// 	bool swaped=true;
// 	while(swaped!=false){
// 		swaped=false;
// 		count+=1;
// 		for(ll i=0;i<n;i++){
// 			if(arr[i]>arr[i+1]){
// 				ll temp=arr[i];
// 				arr[i]=arr[i+1];
// 				arr[i+1]=temp;
// 				swaped=true;
// 			}
// 		}
// 	}
// 	return count;
// }
int main(){
	// #ifndef ONLINE_JUDGE
	// freopen("/home/naman/CP/jc/problem2/input.txt", "r", stdin);
	// freopen("/home/naman/CP/jc/problem2/output.txt", "w", stdout);
	// #endif
	ll n;
	cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++){
		cin>>arr[i];
	}
	// ll num=BubbleSort(a);
	// cout<<num;
	ll count=0;
	n=sizeof(arr)/sizeof(arr[0]);
	bool swaped=true;
	while(swaped!=false){
		swaped=false;
		count+=1;
		for(ll i=0;i<n;i++){
			if(arr[i]>arr[i+1]){
				ll temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
				swaped=true;
			}
		}
	}
	cout<<count;
}