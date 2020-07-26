#include<bits/stdc++.h> 
using namespace std; 
// Driver code 
int main() 
{ 
	#ifndef ONLINE_JUDGE
	freopen("/home/naman/CP/july_circuit/problem2/input.txt", "r", stdin);
	freopen("/home/naman/CP/july_circuit/problem2/output.txt", "w", stdout);
	#endif
	long long n;
	long long count=0;
	cin>>n;
	for(long long i=2;i<=n;i++){
		int have_one=0;
		int num=i;
		while(num>0){
			int rem=num%10;
			if(rem==1){
				have_one=1;
				break;
			}
			num=num/10;
		}
		if(n%i==0 && have_one==0){
			count+=1;
		}
	}
	cout<<count;
}