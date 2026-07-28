#include <bits/stdc++.h>
using namespace std;
string s1, s2;
void dfs(string s1, string s2) {
	char root = s2[0];
	int l = s1.find(root), r = s1.size() - l - 1;
	if (l) {	// l == 0时，没有左子树
		dfs(s1.substr(0, l), s2.substr(1, l));		
	}
	if (r) {	// r == 0时，没有右子树
		dfs(s1.substr(l + 1, r), s2.substr(l + 1, r));		
	}
	cout << root;
}

int main() {
	cin >> s1 >> s2;
	dfs(s2, s1);
	return 0;
}
