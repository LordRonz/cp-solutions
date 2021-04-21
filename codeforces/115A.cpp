#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(x, a, b) for(int x = a; x < b; ++x)
typedef pair<int, int> pii;
//0xACCE97ED;

int main() {
	int n, t, res = 0;
	scanf("%d", &n);
	vector<vector<int>> m(n + 1);
	vector<int> root;
	for(int i = 1; i <= n; ++i) {
		scanf("%d", &t);
		if(t == -1) {
			root.push_back(i);
			continue;
		}
		m[t].push_back(i);
	}
	for(int& a: root) {
		queue<int> q;
		q.push(a);
		int level = 0;
		while(!q.empty()) {
			int tmp = q.size();
			while(tmp--) {
				int j = q.front();
				q.pop();
				for(int i = 0; i < m[j].size(); ++i) {
					q.push(m[j][i]);
				}
			}
			++level;
		}
		res = max(level, res);
	}
	printf("%d\n", res);
	return 0;
}