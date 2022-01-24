#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, t;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		while(n >= 0) {
			if(n % 2020 != 0)
				n -= 2021;
			else break;
		}
		puts(n < 0 ? "NO" : "YES");
	}
	return 0;
}