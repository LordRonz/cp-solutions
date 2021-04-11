#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))

typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int n, q, m, tmp;
	vector<int> x;
	scanf("%d", &n);
	for(int i = 0; i < n; ++i) {
		scanf("%d", &tmp);
		x.emplace_back(tmp);
	}
	sort(x.begin(), x.end());
	scanf("%d", &q);
	while(q--) {
		scanf("%d", &m);
		printf("%ld\n", upper_bound(x.begin(), x.end(), m) - x.begin());
	}
	return 0;
}