#include <stdio.h>
#include <math.h>

int main(void)
{
	int n, t;
	scanf("%d", &n);
	while(n--) {
		scanf("%d", &t);
		printf("%d\n", (int)ceil(t / 2.0) - 1);
	}
	return 0;
}