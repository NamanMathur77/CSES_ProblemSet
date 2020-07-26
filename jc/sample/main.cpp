// C++ program to count number of paths in a maze 
// with obstacles. 
#include<bits/stdc++.h> 
using namespace std; 
// Driver code 
int main() 
{ 
	// #ifndef ONLINE_JUDGE
	// freopen("/home/naman/CP/jc/sample/input.txt", "r", stdin);
	// freopen("/home/naman/CP/jc/sample/output.txt", "w", stdout);
	// #endif
    long long test;
    cin>>test;
    for(long long j=1;j<=test;j++){
        long long n;
        cin>>n;
        long long arr[n];
        long long max=0;
        long long count=0;
        for(long long i=0;i<n;i++){
            cin>>arr[i];
        }
        for(long long i=0;i<n;i++){
            long long num=arr[i];
            if(num>max){
                max=num;
                if(i==n-1){
                	count+=1;
                }
                else if(num>arr[i+1]){
                    count+=1;
                }
            }
        }
        cout<<"Case #"<<j<<": "<<count<<"\n";
    }
}
