#include <stdio.h>

int main(void)
{
	int n, a[108], min[2] = {200, 0}, max[2] = {-1, 0};
	scanf("%d", &n);
	for(int i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
		if(a[i] <= min[0]) {
			min[0] = a[i];
			min[1] = i;
		}
		if(a[i] > max[0]) {
			max[0] = a[i];
			max[1] = i;
		}
	}
	int res = (max[1] - 0) + (n - 1 - min[1]);
	if (max[1] > min[1]) --res;
	printf("%d\n", res);
	return 0;
}