#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
//0xACCE97ED

int main()
{
	int n, t, freq[4] = {}, p[5005], m[5005], s[5005], tot = 0;
	scanf("%d", &n);
	for(int i = 1, j = 0, k = 0, l = 0; i <= n; ++i) {
		scanf("%d", &t);
		++freq[t];
		if(t == 1) {
			p[j++] = i;
		}
		else if(t == 2) {
			m[k++] = i;
		}
		else {
			s[l++] = i;
		}
	}
	tot = min(freq[1], min(freq[2], freq[3]));
	if(tot == 0) {
		printf("0\n");
		return 0;
	}
	printf("%d\n", tot);
	for(int i = 0; i < tot; ++i) {
		printf("%d %d %d\n", p[i], m[i], s[i]);
	}
	return 0;
}