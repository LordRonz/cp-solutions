#include <bits/stdc++.h>

using namespace std;
//0xACCE97ED

int main()
{
	int t, n;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		int res = 0;
		bool found = false;
		while(true) {
			if(n == 1) {
				found = true;
				break;
			}
			if(n % 6 == 0)
				n /= 6, ++res;
			else if(n % 3 == 0)
				n /= 3, res += 2;
			else break;
		}
		printf("%d\n", found ? res : -1);
	}
	return 0;
}