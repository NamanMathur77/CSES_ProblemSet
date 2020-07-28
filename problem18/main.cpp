#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	// #ifndef ONLINE_JUDGE
	// freopen("/home/naman/CP/problem18/input.txt", "r", stdin);
	// freopen("/home/naman/CP/problem18/output.txt", "w", stdout);
	// #endif
	ll cust;
	cin>>cust;
	priority_queue<tuple<int, bool> > q;
	ll count=0;
	while(cust--){
		ll a,b;
		cin>>a>>b;
		q.push({-a,true});
		q.push({-b,false});
	}
	ll x=0;
	while(!q.empty()){
		x+=get<1>(q.top())? 1:-1;
		q.pop();
		count=max(x,count);
	}
	cout<<count;

}

