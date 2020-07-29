#include<bits/stdc++.h>
using namespace std;
using ii = tuple<long, long>;
typedef long long ll;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("/home/naman/CP/problem23/input.txt", "r", stdin);
	freopen("/home/naman/CP/problem23/output.txt", "w", stdout);
	#endif
	ll n;
	cin>>n;
	set<ll> s;
	ll maxcount=0;
	ll innercount=0;
	// cout<<n;
	while(n--){
		ll a;
		cin>>a;
		// cout<<a<<" ";
		if(s.count(a)==1){
			innercount=s.size();
			if(innercount>maxcount){
				maxcount=innercount;
			}
			// for(auto x:s)
			// 	cout<<x<<" ";
			// cout<<"\n";
			innercount=0;
			s.clear();
			s.insert(a);
		}
		else{
			s.insert(a);
		}
		if(n==0){
			innercount=s.size();
			if(innercount>maxcount){
				maxcount=innercount;
			}
		}

	}
	if(maxcount==0){
		cout<<s.size();
	}
	else{
		cout<<maxcount;
	}
}