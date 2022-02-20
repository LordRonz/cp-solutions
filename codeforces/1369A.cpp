#include <bits/stdc++.h>

using namespace std;
//0xACCE97ED

int main()
{
	int t, n;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		n & 3 ? puts("NO") : puts("YES");
	}
	return 0;
}