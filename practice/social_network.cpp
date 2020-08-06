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
		ll curr = q.front();
		q.pop();
		for(auto child:arr[curr]){
			if(visited[child]==0){
				q.push(child);
				visited[child]=1;
				dist[child]=dist[curr]+1;
			}
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
	ll q;
	cin>>q;
	while(q--){
		ll source, distance;
		cin>>source>>distance;
		for(ll i=0;i<=n;i++){
			visited[i]=0;
			dist[i]=0;
		}
		bfs(source);
		ll count=0;
		for(ll i=1;i<=n;i++){
			if(dist[i]==distance){
				count+=1;
			}
		}
		cout<<count<<"\n";
	}
}