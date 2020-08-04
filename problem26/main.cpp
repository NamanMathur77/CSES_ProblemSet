#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> arr[100001];
ll visited[100001];
ll teams[100001];

void dfs(ll node, ll num=1){
	visited[node]=1;
	teams[node]=num;
	for(ll i=0;i<arr[node].size();i++){
		ll child=arr[node][i];
		if(visited[child]==0){
			if(teams[node]==1){
				dfs(child,2);
			}
			else{
				dfs(child,1);
			}
		}
	}
}
ll vis_for_cycle[100001];
bool cycle_detect(ll node,ll par){
	vis_for_cycle[node]=1;
	for(ll child: arr[node]){
		if(vis_for_cycle[child]==0){
			if(cycle_detect(child, node)==true)
				return true;
		}
		else{
			if(child!=par)
				return true;
		}
	}
	return false;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("/home/naman/CP/problem26/input.txt", "r", stdin);
	freopen("/home/naman/CP/problem26/output.txt", "w", stdout);
	#endif
	ll n,m;
	cin>>n>>m;
	for(ll i=0;i<m;i++){
		ll a,b;
		cin>>a>>b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
	dfs(1,1);
	for(ll i=1;i<=n;i++){
		if(visited[i]==0){
			dfs(i);
		}
	}
	bool cycle=cycle_detect(1,1);
	// cout<<cycle;
	if(cycle==false){
	for(ll i=1;i<=n;i++){
		cout<<teams[i]<<" ";
		}
	}
	else{
		cout<<"IMPOSSIBLE";
	}



}