#include <bits/stdc++.h>

using namespace std;

//0xACCE97ED;

int main() {
	int t, n, a[101];
	int freq[101];
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		memset(freq, 0, sizeof(freq));
		for(int i = 0; i < n; ++i) {
			scanf("%d", &a[i]);
			++freq[a[i]];
		}
		int trgt = 0;
		for(int i = 1; i < 101; ++i) {
			if(freq[i] == 1) {
				trgt = i;
				break;
			}
		}
		for(int i = 0; i < n; ++i) {
			if(a[i] == trgt) {
				printf("%d\n", i + 1);
				break;
			}
		}
	}
	return 0;
}