#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int n, a[1005], s, d, l(0), r;
	bool sereja{true};
	scanf("%d", &n);
	for(int i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
	}
	r = n - 1;
	while(l <= r) {
		int tmp = max(a[l], a[r]);
		a[l] > a[r] ? ++l : --r;
		if(sereja) {
			s += tmp;
		}
		else {
			d += tmp;
		}
		sereja = !sereja;
	}
	printf("%d %d\n", s, d);
	return 0;
}