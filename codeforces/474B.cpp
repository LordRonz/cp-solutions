#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int n, a[100005] = {}, m, q;
	std::vector<int>::iterator low1;
	scanf("%d", &n);
	for(int i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
		if(i > 0) a[i] += a[i - 1];
	}
	scanf("%d", &m);
	vector<int> v{a, a + n};
	while(m--) {
		scanf("%d", &q);
		low1 = lower_bound(v.begin(), v.end(), q);
		printf("%ld\n", low1 - v.begin() + 1);
	}
	return 0;
}