#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	// #ifndef ONLINE_JUDGE
	// freopen("/home/naman/CP/problem17/input.txt", "r", stdin);
	// freopen("/home/naman/CP/problem17/output.txt", "w", stdout);
	// #endif
int n, m, x;
  cin >> n >> m;
  multiset<int, greater <int> > h;
  while (n--) {
    cin >> x;
    h.insert(x);
  }
  while (m--) {
    cin >> x;
    auto it = h.lower_bound(x);
    if (it == h.end()) cout << "-1\n";
    else {
      cout << *it << endl;
      h.erase(it);
    }
  }
}