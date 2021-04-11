#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
//0xACCE97ED

int main() {
	int x, cnt = 0;
	scanf("%d", &x);
	while(x) {
		x &= (x - 1);
		++cnt;
	}
	printf("%d\n", cnt);
	return 0;
}