#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int n, res = 0;
	char a[1005], b[1005];
	scanf("%d", &n);
	scanf("%s", a);
	scanf("%s", b);
	for(int i = 0; i < n; ++i) {
		res += min(abs(a[i] - b[i]), 
					10 - (max(a[i], b[i]) - '0') + (min(a[i], b[i]) - '0'));
	}
	printf("%d\n", res);
	return 0;
}