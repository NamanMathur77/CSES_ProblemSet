#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> arr[100001];
ll visited[100001], col[100001];


bool dfs(ll node, int c){
	visited[node]=1;
	col[node]=c;
	for(ll i=0;i<arr[node].size();i++){
		ll child=arr[node][i];
		if(visited[child]==0){
			bool res = dfs(child, c^1);
			if(res==false){
				return false;
			}
		}
		else{
			if(col[node]==col[child])
				return false;
			}
	}
	return true;
}


int main(){
	#ifndef ONLINE_JUDGE
	freopen("/home/naman/CP/practice/input.txt", "r", stdin);
	freopen("/home/naman/CP/practice/output.txt", "w", stdout);
	#endif
	ll t;
	cin>>t;
	for(ll tc=1;tc<=t;tc++){

		ll n,m,a,b;
		cin>>n>>m;
		for(ll i=0;i<=n;i++) arr[i].clear(), visited[i]=0;

		for(ll i=0;i<m;i++){
			cin>>a>>b;
			arr[a].push_back(b);
			arr[b].push_back(a);
		}

		bool flag=true;
		for(ll i=1;i<=n;i++){
			if(visited[i]==0){
				bool res = dfs(i,0);
				if(res==false)
					flag=false;
			}

		}
		cout<<"Scenario #"<<tc<<":\n";

		if(flag==false){
			cout<<"Suspicious bugs found!"<<"\n";
		}
		else{
			cout<<"No suspicious bugs found!"<<"\n";
		}


	}


}