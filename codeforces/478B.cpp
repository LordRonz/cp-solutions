#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	long long n, m, mx = 0, mn = 0;
	scanf("%lld %lld", &n, &m);
	long long tmp = n - (m - 1);
	mx = tmp * (tmp - 1) / 2;
	tmp = n / m;
	long long tmp2 = n % m;
	mn = ((tmp + 1) * tmp / 2) * tmp2 + (tmp * (tmp - 1) / 2) * (m - tmp2);
	printf("%lld %lld\n", min(mn, mx), max(mn, mx));
	return 0;
}