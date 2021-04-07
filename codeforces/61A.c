#include <stdio.h>

int main(void)
{
	char b1[105], b2[105], ans[105];
	int i = 0;
    scanf("%s %s", b1, b2);
	for(; b1[i] != '\0'; ++i) {
		if(b1[i] == b2[i]) ans[i] = '0';
		else ans[i] = '1';
	}
	ans[i] = '\0';
	printf("%s\n", ans);
	return 0;
}