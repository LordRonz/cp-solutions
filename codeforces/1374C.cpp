#include <bits/stdc++.h>

using namespace std;
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