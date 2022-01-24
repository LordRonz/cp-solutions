#include <bits/stdc++.h>

using namespace std;

int main() {
	int t, n;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		printf("9");
		int a = 8;
		for(int i = 1; i < n; ++i, ++a) {
			if(a > 9) a = 0;
			printf("%d", a);
		}
		puts("");
	}
	return 0;
}