#include <bits/stdc++.h>

using namespace std;
//0xACCE97ED

int main()
{
	int t, l ,r;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d", &l, &r);
		printf("%d %d\n", l * 2 <= r ? l : -1, l * 2 <= r ? l * 2 : -1);
	}
	return 0;
}