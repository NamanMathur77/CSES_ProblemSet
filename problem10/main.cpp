#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	// #ifndef ONLINE_JUDGE
	// freopen("/home/naman/CP/problem10/input.txt", "r", stdin);
	// freopen("/home/naman/CP/problem10/output.txt", "w", stdout);
	// #endif
	ll num;
	cin>>num;
	ll count=0;
	while(num!=0){
		num=num/5;
		count+=num;
	}
cout<<count;
}