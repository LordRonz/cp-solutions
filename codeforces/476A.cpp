#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int n, m, tot = 0;
	scanf("%d %d", &n, &m);
	if(n < m) {
		puts("-1");
		return 0;
	}
	if(n == m) {
		printf("%d\n", m);
		return 0;
	}
	tot = n >> 1;
	if(n % m != 0)
		++tot;
	while(tot % m != 0) {
		++tot;
	}
	printf("%d\n", tot);
	return 0;
}