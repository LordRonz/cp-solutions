#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int n, x, cnt{};
	scanf("%d %d", &n, &x);
	for(int i = 1; i <= n; ++i) {
		if(x % i == 0 && x / i <= n) ++cnt;
	}
	printf("%d\n", cnt);
	return 0;
}