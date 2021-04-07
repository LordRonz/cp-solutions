#include <stdio.h>

int main(void)
{
	int n, m, g = 0, p = -1;
    scanf("%d", &n);
	for(int i = 0; i < n; ++i) {
		scanf("%d", &m);
		if(p == -1) {
			++g;
		}
		else if(p != m) {
			++g;
		}
		p = m;
	}
	printf("%d\n", g);
    return 0;
}