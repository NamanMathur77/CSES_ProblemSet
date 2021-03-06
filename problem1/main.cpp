#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> const &out)
{
	for (int i: out)
		cout << i << " ";
	cout << '\n';
}

// Recursive function to print all distinct subsets of S
// S	--> input set
// out  --> vector to store subset
// i	--> index of next element in set S to be processed
void findPowerSet(int S[], vector<int> &out, int i)
{
	// if all elements are processed, print the current subset
	int n = sizeof(S) / sizeof(S[0]);
	if (i >= n)
	{
		printVector(out);
		return;
	}

	// include current element in the current subset and recur
	out.push_back(S[i]);
	findPowerSet(S, out, i + 1);

	// exclude current element in the current subset
	out.pop_back(); // backtrack

	// // remove adjacent duplicate elements
	// while (S[i] == S[i-1])
	// 	i--;

	// exclude current element in the current subset and recur
	findPowerSet(S, out, i + 1);
}


int main(){
	// #ifndef ONLINE_JUDGE
	// freopen("/home/naman/CP/input.txt", "r", stdin);
	// freopen("/home/naman/CP/output.txt", "w", stdout);
	// #endif
	int n;
    int S[] = { 1, 3, 1 };
	n = sizeof(S) / sizeof(S[0]);

	// sort the set
	sort(S, S + n);

	// create an empty vector to store elements of a subset
	vector<int> out;
	findPowerSet(S, out, 0);

	return 0;

}