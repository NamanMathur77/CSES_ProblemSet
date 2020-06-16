#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("/home/naman/CP/er/problem1/input.txt", "r", stdin);
	freopen("/home/naman/CP/er/problem1/output.txt", "w", stdout);
	#endif
	ll test;
	cin>>test;
	while(test>0){
		ll n,m,k;
		cin>>n>>m>>k;
		ll max_cards=n/k;
		ll arr[k];
		// 		// if(max_cards<m){
		// 		// 	arr[0]=m-max_cards;
		// 		// 	m-=arr[0];
		// 		// 	// cout<<arr[0];
		// 		// }
		// 		// else{
		// 		// 	arr[0]=max_cards-m;
		// 		// 	m-=arr[0];
		// 		// 	// cout<<arr[0];
		// 		// }
		// 		cout<<"hello";
		for(ll i=0;i<k;i++){
			if(max_cards>=m){
				arr[i]=m;
				m=m-arr[i];
			}
			else{
				if(m>max_cards){
					arr[i]=max_cards;
					m=m-arr[i];
				}
				else if(m==0){
					arr[i]=0;
					// arr[i]=m;
					// m=m-arr[i];
				}
				else{
					arr[i]=m;
					m=m-arr[i];
				}

			}
		}
		sort(arr, arr+k);
		ll diff=arr[0]-arr[1];
		cout<<diff;

		// test=test-1;
		cout<<"Hiii";
		test=test-1;
	}
}