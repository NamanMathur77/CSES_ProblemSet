#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<ll> arr[100001];
ll visited[100001];
ll IN[100001];
ll OUT[100001];
ll timer=1;
char letters[100001];
void dfs(ll node){
	visited[node]=1;
	IN[node]=timer++;
	for(auto child:arr[node]){
		if(visited[child]==0){
			dfs(child);
			// cout<<child<<" ";
		}
	}
	OUT[node]=timer++;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("/home/naman/CP/practice/input.txt", "r", stdin);
	freopen("/home/naman/CP/practice/output.txt", "w", stdout);
	#endif
	ll n,q,a,b;
	cin>>n>>q;
	for(ll i=1;i<=n;i++){
		cin>>letters[i];
	}
	for(ll i=0;i<n-1;i++){
		cin>>a>>b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
	dfs(1);
	ll num;
	map<char, ll> charcount;

	for(ll i=0;i<q;i++){
		charcount.clear();
		cin>>num;
		string s;
		cin>>s;
		for(auto x:s){
			if(charcount[x]>0){
				charcount[x]+=1;
			}
			else{
				charcount[x]=1;
			}
		}

		for(ll i=1;i<=n;i++){
		if(IN[i]>IN[num]){
			if(OUT[i]<OUT[num]){
				char a=letters[i];
				if(charcount[a]>0){
					charcount[a]-=1;
				}
			}
		}
		char a =letters[num];
		if(charcount[a]>0){
			charcount[a]-=1;
		}
	}
	ll count=0;
	for(auto x:charcount){
		count+=x.second;
	}
	cout<<count<<"\n";
	}



	// for(ll i=1;i<=n;i++){
	// 	cout<<OUT[i]<<" ";
	// 	cout<<IN[i]<<" ";
	// }
}