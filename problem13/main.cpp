#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


ll fact(ll n){
	ll res=1;
	for(ll i=1;i<=n;i++){
		res=res*i;
	}
	return res;
}

int main(){
	// #ifndef ONLINE_JUDGE
	// freopen("/home/naman/CP/sample/input.txt", "r", stdin);
	// freopen("/home/naman/CP/sample/output.txt", "w", stdout);
	// #endif
	string s;
	cin>>s;
	char arr[10000];
	for(ll i=0;i<s.length();i++){
		arr[i]=s[i];
	}
	ll n=s.length();
	unordered_map<char, int> charmap;
	for(ll i=0;i<n;i++){
		charmap[arr[i]]++;
	}
	ll num=fact(n);
	for(auto x:charmap){
		ll f=fact(x.second);
		num=num/f;
	}
	cout<<num<<"\n";  
    sort(arr, arr + n); 
    do { 
        cout << arr<< "\n"; 
    } while (next_permutation(arr, arr + n)); 
  
    return 0; 
}