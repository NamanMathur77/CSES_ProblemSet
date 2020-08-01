#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> arr[100001];
ll visited[100001];

void dfs(ll node){
	visited[node]=1;
	for(ll i=0;i<arr[node][i];i++){
		ll val = arr[node][i];
		if(visited[val]==0){
			dfs(val);
		}
	}
}


int main(){
	// #ifndef ONLINE_JUDGE
	// freopen("/home/naman/CP/practice/input.txt", "r", stdin);
	// freopen("/home/naman/CP/practice/output.txt", "w", stdout);
	// #endif
	ll test;
	ll n,m;
	cin>>n>>m;
	for(ll i=0;i<m;i++){
		ll u,v;
		cin>>u>>v;
		arr[u].push_back(v);
		arr[v].push_back(u);
	}
	ll cc=0;
	for(ll i=1;i<n;i++){
		if(visited[i]==0){
			dfs(i);
			cc+=1;
		}
	}
	if(cc==1 && m<=n-1){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}