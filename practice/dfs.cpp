#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> arr[1000001];
ll connected[1000001];

void dfs(ll a){
	connected[a]=1;
	// cout<<a<<"->";
	for(ll i=0;i<arr[a].size();i++){
		ll val=arr[a][i];
		if(connected[val]==0){
			dfs(val);
		}
	}
}

int main(){
	ll nodes, edges;
	cin>>nodes>>edges;
	while(edges--){
		ll a,b;
		cin>>a>>b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
	ll count=0;
	for(ll i=1;i<=nodes;i++){
		if(connected[i]==0){
			dfs(i);
			count+=1;
		}

	}
	cout<<count;
}