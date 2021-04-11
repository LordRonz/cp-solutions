#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	char s[105], cur = 'a';
	int res = 0;
	scanf("%s", s);
	for(int i = 0; s[i] != '\0'; ++i) {
		int a = min(abs(s[i] - cur), abs('z' + min(s[i], cur) - max(s[i], cur) - 'a') + 1);
		res += a;
		cur = s[i];
	}
	printf("%d\n", res);
	return 0;
}