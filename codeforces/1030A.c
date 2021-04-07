#include <stdio.h>

int main(void)
{
	int n, m;
    scanf("%d", &n);
	for(int i = 0; i < n; ++i) {
		scanf("%d", &m);
		if(m) {
			printf("HARD\n");
			return 0;
		}
	}
	printf("EASY\n");
    return 0;
}