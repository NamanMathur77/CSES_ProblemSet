#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	// #ifndef ONLINE_JUDGE
	// freopen("/home/naman/CP/problem3/input.txt", "r", stdin);
	// freopen("/home/naman/CP/problem3/output.txt", "w", stdout);
	// #endif
string str;
    cin>>str;
    int count=1;
    for(int i=0;i<str.length()-1;)
    {
        if(str[i]==str[i+1])
        {
            int tmp=1;
            for(int j=i+1;j<str.length();j++)
            {
                if(str[i]!=str[j])
                {
                    break;
                }
                else
                {
                    tmp++;
                }
            }
            i+=tmp;
            count=max(count,tmp);
            continue;
        }
     i++;   
 
    }
    cout<<count<<'\n';

}