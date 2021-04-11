#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))

typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int n, m;
	unordered_set<int> look;
	queue<pii> q;
	scanf("%d %d", &n, &m);
	if(n > m) {
		printf("%d\n", n - m);
		return 0;
	}
	q.push(make_pair(n, 0));
	look.insert(n);
	while(!q.empty()) {
		int a = q.front().first;
		int step = q.front().second;
		q.pop();
		if(a == m) {
			printf("%d\n", step);
			return 0;
		}
		if(a <= 0) continue;
		if(a - 1 > 0 && look.find(a - 1) == look.end()) {
			q.push(make_pair(a - 1, step + 1));
			look.insert(a - 1);
		}
		if(a << 1 < m << 1 && look.find(a << 1) == look.end()) {
			q.push(make_pair(a << 1, step + 1));
			look.insert(a << 1);
		}
	}
	return 0;
}