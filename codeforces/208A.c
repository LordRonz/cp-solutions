#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	char s[210];
	bool wub = false;
	bool f = true;
	scanf("%s", s);
	for(int i = 0; s[i] != '\0'; ++i) {
		if(s[i] != '\0' && s[i + 1] != '\0' && s[i + 2] != '\0' && s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') i += 2, wub = true;
		else if(wub && !f) {
			printf(" %c", s[i]);
			wub = false;
		}
		else if(f || !wub){
			printf("%c", s[i]);
			wub = false;
			f = false;
		}
	}
	printf("\n");
	return 0;
}