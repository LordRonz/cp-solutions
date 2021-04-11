#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int n, m, a[100005], b[100005] = {}, freq[100005] = {};
	long long s = 0;
	scanf("%d %d", &n, &m);
	for(int i = 0, j = n; i < n; ++i, --j) {
		scanf("%d", &a[i]);
	}
	for(int i = n, j = 0; i > 0; --i, ++j) {
		++freq[a[i - 1]];
		b[i] = b[i + 1] + (freq[a[i - 1]] == 1 ? 1 : 0);
	}
	while(m--) {
		int c;
		scanf("%d", &c);
		printf("%d\n", b[c]);
	}
	return 0;
}