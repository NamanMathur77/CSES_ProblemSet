#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char arr[5][5];
int countPaths(int m, int n) 
{ 
    // Return 1 if it is the first row or  
    // first column
    if(arr[m][n]=='#'){
    	arr[m][n]='1';
    }
    if (m == 0 || n == 0) 
        return 1; 
   
    // Recursively find the no of way to  
    // reach the last cell. 
    return countPaths(m - 1, n) +  
           countPaths(m, n - 1); 
} 
int initailize(int m, int n){
	for(int i=0;i<m;i++){
		if(arr[i][0]=='#'){
			arr[i][0]='1';
			for(int j=i+1;j<=m;j++){
				arr[j][0]='1';
			}
		}
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("/home/naman/CP/jc/problem1/input.txt", "r", stdin);
	freopen("/home/naman/CP/jc/problem1/output.txt", "w", stdout);
	#endif
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++)
			cin>>arr[i][j];
	}

	int n = 4; 
    int m = 4;  
    initailize(n,m);
    countPaths(n, m); 
 //    for(int i=0;i<5;i++){
	// 	for(int j=0;j<5;i++)
	// 		cout<<arr[i][j];
	// }
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++)
			cout<<arr[i][j];
		cout<<"\n";
	}

}