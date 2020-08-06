#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<ll> arr[100001];
ll visited[100001];
ll maxD=0;
ll maxNode=0;
void dfs(ll node, ll d){
	visited[node]=1;
	if(d>maxD){
		maxD=d;
		maxNode=node;
	}
	for(auto child: arr[node]){
		if(visited[child]==0){
			dfs(child, d+1);
		}
	}
}

int main(){
	// #ifndef ONLINE_JUDGE
	// freopen("/home/naman/CP/practice/input.txt", "r", stdin);
	// freopen("/home/naman/CP/practice/output.txt", "w", stdout);
	// #endif
	
	ll n,a,b;
	cin>>n;
	for(ll i=0;i<n-1;i++){
		cin>>a>>b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
	dfs(1,0);
	ll max_dist_frm_1=maxNode;
	// cout<<maxNode;
	for(ll i=1;i<=n;i++){
		visited[i]=0;
	}
	maxNode=0;
	maxD=0;
	dfs(max_dist_frm_1, 0);
	cout<<maxD;

}