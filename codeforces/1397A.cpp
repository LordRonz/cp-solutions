#include <bits/stdc++.h>

using namespace std;
//0xACCE97ED

int main()
{
	int n, t, freq[30];
	char s[1005];
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		memset(freq, 0, sizeof(freq));
		for(int j = 0; j < n; ++j) {
			scanf("%s", s);
			for(int i = 0; i < strlen(s); ++i) {
				++freq[s[i] - 'a'];
			}
		}
		bool found = false;
		for(int i = 0; i < 30; ++i) {
			if(freq[i]) {
				if(freq[i] % n != 0) {
					found = true;
					break;
				}
			}
		}
		found ? puts("NO") : puts("YES");
	}
	return 0;
}