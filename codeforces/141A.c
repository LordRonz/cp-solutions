#include <stdio.h>

int main(void)
{
	int n, freq[26] = {};
	char s[110];
	scanf("%s", s);
	for(int i = 0; s[i] != '\0'; ++i) {
		++freq[s[i] - 'A'];
	}
	scanf("%s", s);
	for(int i = 0; s[i] != '\0'; ++i) {
		++freq[s[i] - 'A'];
	}
	scanf("%s", s);
	for(int i = 0; s[i] != '\0'; ++i) {
		if(freq[s[i] - 'A'] <= 0) {
			printf("NO\n");
			return 0;
		}
		--freq[s[i] - 'A'];
	}
	for(int i = 0; i < 26; ++i) {
		if(freq[i]) {
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}