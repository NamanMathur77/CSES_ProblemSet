#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<ll> arr[100001];
ll visited[100001];

ll dfs( ll node ){
	visited[node]=1;
	for(ll i=0;i<arr[node].size();i++){
		ll val = arr[node][i];
		if(visited[val]==0){
			dfs(val);
		}
	}
	return node;
}


int main(){
	// #ifndef ONLINE_JUDGE
	// freopen("/home/naman/CP/problem24/input.txt", "r", stdin);
	// freopen("/home/naman/CP/problem24/output.txt", "w", stdout);
	// #endif
	ll n,m;
	cin>>n>>m;
	for(ll i=0;i<=m;i++){
		ll a,b;
		cin>>a>>b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
	ll components=0;
	ll prev_node=0;
	map<ll, ll> connections;
	for(ll i=1;i<=n;i++){
		if(visited[i]==0){
			// components+=1;
			if(prev_node!=0){
				connections[prev_node]=dfs(i);
			}
			prev_node = dfs(i);
		}
	}
	cout<<connections.size()<<"\n";
	for(auto x:connections){
		cout<<x.first<<" "<<x.second<<"\n";
	}

}