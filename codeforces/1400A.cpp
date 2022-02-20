#include <bits/stdc++.h>

using namespace std;
//0xACCE97ED

int main()
{
	unsigned t, n;
	char s[105];
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		scanf("%s", s);
		if(n == 1) {
			printf("%c\n", s[0]);
			continue;
		}
		for(int i = 0; i < 2 * n - 1; i += 2) {
			printf("%c", s[i]);
		}
		puts("");
	}
	return 0;
}