#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	// #ifndef ONLINE_JUDGE
	// freopen("/home/naman/CP/problem12/input.txt", "r", stdin);
	// freopen("/home/naman/CP/problem12/output.txt", "w", stdout);
	// #endif
	string s;
	cin>>s;
	unordered_map<char, int> charmap;
	for(int i=0;i<s.length();i++){
		charmap[s[i]]++;
	}
	ll oddCount=0;
	char oddChar;
	for(auto x:charmap){
		if(x.second%2!=0){
			oddCount+=1;
			oddChar=x.first;
		}
	}
	if(oddCount>1 || oddCount ==1 && s.length()%2==0){
		cout<<"NO SOLUTION";
	}
	else{
		string first="", second="";
		for(auto x : charmap){
			string st(x.second/2, x.first);
			first=first+st;
			second=st+second;
		}
		if(oddCount==1){
			cout<<first+oddChar+second;
		}
		else{
			cout<<first+second;
		}

	}

}