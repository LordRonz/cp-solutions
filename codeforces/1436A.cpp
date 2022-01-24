#include <bits/stdc++.h>

using namespace std;

int main() {
	int t, n, m, a;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d", &n, &m);
		int res = 0;
		while(n--) {
			scanf("%d", &a);
			res += a;
		}
		puts(res == m ? "YES" : "NO");
	}
}