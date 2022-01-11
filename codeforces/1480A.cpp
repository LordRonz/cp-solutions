#include <bits/stdc++.h>

using namespace std;

//0xACCE97ED;

int main() {
	int t, n;
	char s[55];
	scanf("%d", &t);
	while(t--) {
        scanf("\n%s", s);
		for(int i = 0; s[i] != '\0'; ++i) {
			if(i & 1) {
				if(s[i] != 'z') s[i] = 'z';
				else s[i] = 'y';
			}
			else {
				if(s[i] != 'a') s[i] = 'a';
				else s[i] = 'b';
			}
		}
		printf("%s\n", s);
	}
	return 0;
}