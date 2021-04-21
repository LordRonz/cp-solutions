#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(x, a, b) for(int x = a; x < b; ++x)
typedef pair<int, int> pii;
//0xACCE97ED;

int main() {
	int tot = 0, qcnt = 0;
	char s[105];
	char a[105] = {};
	scanf("%s", s);
	int k = 0;
	while(s[k] != '\0' && s[k] != 'Q') ++k;
	for(int i = k, j = 0; s[i] != '\0'; ++i) {
		if(s[i] == 'Q') ++qcnt;
		else if(s[i] == 'A') {
			a[j++] = qcnt;
		}
	}
	for(int i = 0; a[i]; ++i) {
		int b = a[i];
		int c = qcnt - a[i];
		tot += b >= 0 && c >= 0 ? b * c : 0;
	}
	printf("%d\n", tot);
	return 0;
}