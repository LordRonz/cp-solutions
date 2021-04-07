#include <stdio.h>

int main(void)
{
	int n, even = 0, odd = 0, num, eindex, oindex;
	scanf("%d", &n);
	for(int i = 1; i <= n; ++i) {
		scanf("%d", &num);
		if(num & 1) {
			++odd;
			oindex = i;
		}
		else {
			++even;
			eindex = i;
		}
	}
	printf("%d\n", odd < even ? oindex : eindex);
	return 0;
}