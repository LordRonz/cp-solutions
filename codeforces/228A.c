#include <stdio.h>

int main(void)
{
	int n, p = -1, res = 0, temp[4] = {};
	for(int i = 0; i < 4; ++i) {
		scanf("%d", &n);
		for(int j = 0; j < 4; ++j) {
			if(n == temp[j]) {
				++res; 
				break;
			}
		}
		temp[i] = n;
	}
	printf("%d\n", res);
	return 0;
}