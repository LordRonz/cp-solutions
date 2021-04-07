#include <stdio.h>
#include <string.h>

int main(void)
{
	int n, freq[26] = {};
	char s[110];
	scanf("%d", &n);
	if(n < 26) {
		printf("NO\n");
		return 0;
	}
	scanf("%s", s);
	for(int i = 0; i < n; ++i) {
		freq[s[i] - (s[i] < 97 ? 'A' : 'a')] += 1;
	}
	for(int i = 0; i < 26; ++i) {
		if(!freq[i]) {
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}