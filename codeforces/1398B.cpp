#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(x, a, b) for(int x = a; x < b; ++x)
typedef pair<int, int> pii;
//0xACCE97ED;

int main() {
	int t, a[105];
	char s[105];
	scanf("%d\n", &t);
	while(t--) {
		scanf("%s", s);
		int cnt = 0, j = 0;
		memset(a, 0, sizeof(a));
		for(int i = 0; s[i] != '\0'; ++i) {
			if(s[i] == '1') {
				++cnt;
			}
			else if(s[i] == '0' && cnt){
				a[j++] = cnt;
				cnt = 0;
			}
		}
		if(cnt) {
			a[j++] = cnt;
		}
		cnt = 0;
		sort(a, a + j, greater<int>());
		for(int i = 0; i < j; i += 2) {
			cnt += a[i];
		}
		printf("%d\n", cnt);
	}
	return 0;
}