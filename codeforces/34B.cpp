#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	short n, m, a[1005];
	int res = 0;
	scanf("%hd %hd", &n, &m);
	for(int i = 0; i < n; ++i) {
		scanf("%hd", &a[i]);
	}
	sort(a, a + n);
	n = 0;
	for(int i = 0; i < m; ++i) {
		if(a[i] < 0)
			res += a[i];
		else break;
	}
	printf("%d\n", res * -1);
	return 0;
}