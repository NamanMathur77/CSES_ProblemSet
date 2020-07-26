#include<bits/stdc++.h> 
using namespace std; 
// Driver code 
typedef long long int ll; 
  
// Utility function to find 
// GCD of 'a' and 'b' 
ll gcd(ll a, ll b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
} 
  
// Returns LCM of array elements 
ll findlcm(ll arr[], ll n) 
{ 
    // Initialize result 
    ll ans = arr[0]; 
  
    // ans contains LCM of arr[0], ..arr[i] 
    // after i'th iteration, 
    for (ll i = 1; i < n; i++) 
        ans = (((arr[i] * ans)) / 
                (gcd(arr[i], ans))); 
  
    return ans; 
} 

int main() 
{ 
	#ifndef ONLINE_JUDGE
	freopen("/home/naman/CP/july_circuit/problem3/input.txt", "r", stdin);
	freopen("/home/naman/CP/july_circuit/problem3/output.txt", "w", stdout);
	#endif
	ll size,k,mod;
	cin>>size>>mod>>k;
	ll arr[size];
	for(ll i=0;i<size;i++)
		cin>>arr[i];

	ll n = sizeof(arr) / sizeof(arr[0]); 
	ll lcm=findlcm(arr, n);
	ll num=pow(lcm, k);
	cout<<num%mod;




}