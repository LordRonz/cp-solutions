#include <bits/stdc++.h>

using namespace std;
const int MAX_N = 1e5 + 1;

int main() {
	int t, n;
	char s[MAX_N];
	char newS[MAX_N];
	scanf("%d", &t);
	while(t--) {
        scanf("%d", &n);
		scanf("\n%s", s);
		for(int i = 0; i < n; ++i) {
			if(i == 0) {
				newS[i] = '1';
			}
			else {
				int a = s[i - 1] - '0';
				int b = newS[i - 1] - '0';
				int tmp = a + b;
				if(tmp == 2) {
					if(s[i] == '1') {
						newS[i] = '0';
					}
					else {
						newS[i] = '1';
					}
				}
				else if(tmp == 1) {
					if(s[i] == '1') {
						newS[i] = '1';
					}
					else {
						newS[i] = '0';
					}
				}
				else if(tmp == 0) {
					newS[i] = '1';
				}
			}
		}
		newS[strlen(s)] = '\0';
		printf("%s\n", newS);
	}
	return 0;
}