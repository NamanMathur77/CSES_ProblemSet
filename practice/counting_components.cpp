#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> arr[100001];
ll visited[100001];
ll cc_count;

void dfs(ll node){
	visited[node]=1;
	cc_count+=1;
	for(ll i=0;i<arr[node].size();i++){
		ll val=arr[node][i];
		if(visited[val]==0){
			dfs(val);
		}
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("/home/naman/CP/practice/input.txt", "r", stdin);
	freopen("/home/naman/CP/practice/output.txt", "w", stdout);
	#endif

	ll n,m,a,b;
	cin>>n>>m;
	for(ll i=0;i<m;i++){
		cin>>a>>b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
	ll res=1;
	for(ll i=1;i<=n;i++){
		if(visited[i]==0){
			cc_count=0;
			dfs(i);
			res=res*cc_count;
		}
	}
	cout<<res;


}