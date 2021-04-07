#include <stdio.h>

int main(void)
{
	int n, a[50][2], tot = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; ++i) {
		scanf("%d %d", &a[i][0], &a[i][1]);
	}
	for(int i = 0; i < n - 1; ++i) {
		for(int j = i + 1; j < n; ++j) {
			if(a[i][0] == a[j][1]) ++tot;
			if(a[i][1] == a[j][0]) ++tot;
		}
	}
	printf("%d\n", tot);
	return 0;
}