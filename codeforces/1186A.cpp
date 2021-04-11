#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int n, m, k;
	scanf("%d %d %d", &n, &m, &k);
	n <= min(m, k) ? puts("Yes") : puts("No");
	return 0;
}