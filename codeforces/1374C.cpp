#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int t, n;
	char s;
	scanf("%d", &t);
	while(t--) {
		scanf("%d\n", &n);
		int res{};
		int tmp{};
		while(n--) {
			scanf("%c", &s);
			if(s == '(') {
				++tmp;
			} else --tmp;
			res = min(tmp, res);
		}
		printf("%d\n", abs(res));
	}
	return 0;
}