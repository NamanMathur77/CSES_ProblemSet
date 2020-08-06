#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> arr[100001];
ll visited[100001];
ll dist[100001];

void bfs(ll src){
	queue<ll> q;
	q.push(src);
	visited[src]=1;
	dist[src]=0;
	while(!q.empty()){
		ll curr=q.front();
		q.pop();
		for(auto child:arr[curr]){
			if(visited[child]==0){
				q.push(child);
				dist[child]=dist[curr]+1;
				visited[child]=1;
			}
		}
	}

}

int main(){
	// #ifndef ONLINE_JUDGE
	// freopen("/home/naman/CP/practice/input.txt", "r", stdin);
	// freopen("/home/naman/CP/practice/output.txt", "w", stdout);
	// #endif
	ll test;
	cin>>test;
	while(test--){
	ll a,b,n,m;
	cin>>n>>m;
	for(ll i=0;i<=n;i++){
		arr[i].clear();
		visited[i]=0;
	}
	for(ll i=0;i<m;i++){
		cin>>a>>b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
	bfs(1);
	cout<<dist[n]<<"\n";
}
}