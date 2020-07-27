#include<bits/stdc++.h>
using namespace std;

int main(){
	priority_queue<tuple<int, bool> >q;
	q.push({3,true});
	q.push({5,false});
	q.push({3,true});
	cout<<get<0>(q.top());
	q.pop();
	cout<<get<0>(q.top());


}