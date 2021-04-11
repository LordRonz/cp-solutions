#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	long long a[4], res = 0;
	char c;
	scanf("%lld %lld %lld %lld\n", &a[0], &a[1], &a[2], &a[3]);
	while((c = getchar()) != EOF && c != '\n') {
		res += a[c - '0' - 1];
	}
	printf("%lld\n", res);
	return 0;
}