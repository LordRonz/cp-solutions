#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int n, t;
	char s[105];
	for(int i = 0; i < 105; ++i) s[i] = '0';
	scanf("%d %d", &n, &t);
	if(n == 1 && t == 10) {
		puts("-1");
		return 0;
	}
	s[0] = '0' + t % 10;
	s[0] = s[0] == '0' ? '1' : s[0];
	for(int i = 0; i < n; ++i) {
		printf("%c", s[i]);
	}
	puts("");
	return 0;
}