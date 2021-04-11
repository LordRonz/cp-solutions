#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))

typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int n, a[10][10];
	scanf("%d", &n);
	fill(&a[0][0], &a[0][0] + 100, 1);
	for(int i = 1; i < 10; ++i) {
		for(int j = 1; j < 10; ++j) {
			a[i][j] = a[i - 1][j] + a[i][j - 1];
		}
	}
	printf("%d\n", a[n - 1][n - 1]);
	return 0;
}