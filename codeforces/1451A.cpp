#include <bits/stdc++.h>

using namespace std;

int main() {
	int t, n;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		if(n == 1) {
			puts("0");
			continue;
		}
		if(n == 2) {
			puts("1");
			continue;
		}
		if(n & 1 && n != 3) {
			puts("3");
		} else {
			puts("2");
		}
	}
	return 0;
}