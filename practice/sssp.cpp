#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> arr[100001];
ll connected[100001];
ll dist[100001];

void dfs(ll node, ll d){
	connected[node]=1;
	dist[node]=d;
	// cout<<node<<"->"<<dist[node]<<"\n";
	for(ll i=0;i<arr[node].size();i++){
		ll val=arr[node][i];
		if(connected[val]==0){
			dfs(val,dist[node]+1);
		}
	}
}


int main(){
	ll nodes;
	cin>>nodes;
	for(ll i=0;i<nodes-1;i++){
		ll a,b;
		cin>>a>>b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
	dfs(1, 0);
	// for(ll i=0;i<nodes;i++){
	// 	cout<<dist[i];
	// }

	ll q;
	cin>>q;
	ll min_dist=999999;
	ll city_no=0;

	while(q--){
		ll girl_city;
		cin>>girl_city;
		if(dist[girl_city]<min_dist){
			min_dist=dist[girl_city];
			city_no=girl_city;
		}
		else if(dist[girl_city]==min_dist){
			if(girl_city<city_no){
				city_no=girl_city;
			}
		}

	}
	cout<<city_no;

}