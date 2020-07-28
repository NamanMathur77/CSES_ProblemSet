#include<bits/stdc++.h>
using namespace std;
using ii = tuple<long, long>;
typedef long long ll;
int main(){
	// #ifndef ONLINE_JUDGE
	// freopen("/home/naman/CP/problem19/input.txt", "r", stdin);
	// freopen("/home/naman/CP/problem19/output.txt", "w", stdout);
	// #endif
	ll movies;
	cin>>movies;
	vector<ii> v;
	while(movies--){
		ll a,b;
		cin>>a>>b;
		v.push_back({b,a});
	}
	ll chosen=0;
	ll count=0;
	sort(v.begin(), v.end());
	ll z,y;
	for(ii x:v){
		tie(z,y) = x;
		if(y>=chosen){
			chosen=z;
			count+=1;
		}

	}
	cout<<count;


}