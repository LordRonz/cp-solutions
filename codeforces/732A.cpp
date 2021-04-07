#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
//0xACCE97ED

int main()
{
	int k, r, t;
	scanf("%d %d", &k, &r);
	t = k;
	for(int i = 1; i < 11; ++i) {
		k = t * i;
		if(k % 10 == 0 || (k - r) % 10 == 0) {
			printf("%d\n", i);
			return 0;
		}
	}
	return 0;
}