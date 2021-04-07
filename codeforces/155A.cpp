#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
//0xACCE97ED

int main()
{
	int n, c, min = -1, max = -1, tot = 0;
	scanf("%d", &n);
	while(n--) {
		scanf("%d", &c);
		if(min == -1) {
			min = c;
			max = c;
		}
		else {
			if(c < min) {
				++tot;
				min = c;
			}
			else if(c > max) {
				++tot;
				max = c;
			}
		}
	}
	printf("%d\n", tot);
	return 0;
}