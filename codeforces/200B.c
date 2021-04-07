#include <stdio.h>

int main(void)
{
	int n, p; 
	float sum = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; ++i) {
		scanf("%d", &p);
		sum += p;
	}
	printf("%f\n", sum / n);
	return 0;
}