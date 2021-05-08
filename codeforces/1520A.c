#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int t, n;
	char s[55];
	bool memo[27] = {};
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		scanf("\n%s", s);
		bool yes = 1;
		for(int i = 0; i < 27; ++i) {
			memo[i] = 0;
		}
		for(int i = 0; i < n; ++i) {
			if(memo[s[i] - 'A']) { 
				yes = 0;
				break;
			}
			if(i > 0 && s[i] != s[i - 1]) {
				memo[s[i - 1] - 'A'] = 1;
			}
		}
		puts(yes ? "YES" : "NO");
	}
	return 0;
}