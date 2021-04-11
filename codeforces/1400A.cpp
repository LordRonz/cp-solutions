#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
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