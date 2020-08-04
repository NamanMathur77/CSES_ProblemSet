#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> arr[100001];
ll visited[100001];
ll dist[100001];
vector<ll> travel[100001];

void dfs(ll node, ll d){
	visited[node]=1;
	dist[node]=d;
	for(ll i=0;i<arr[node].size();i++){
		ll child = arr[node][i];
		if(visited[child]==0){
			cout<<node<<"->"<<child;
			dfs(child, dist[node]+1);
		}
	}
}


int main(){
	#ifndef ONLINE_JUDGE
	freopen("/home/naman/CP/problem25/input.txt", "r", stdin);
	freopen("/home/naman/CP/problem25/output.txt", "w", stdout);
	#endif

	ll n,m,a,b;
	cin>>n>>m;
	for(ll i=0;i<m;i++){
		cin>>a>>b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
	dfs(1,0);

}