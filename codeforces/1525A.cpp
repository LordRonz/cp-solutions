#include <bits/stdc++.h>

using namespace std;

//0xACCE97ED;

int main() {
	int t, k;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &k);
		int factor[] = {100, 50, 25, 20, 10, 5, 4, 2, 1};
		bool yes = 0;
		for(int i = 0; i < 9; ++i) {
			if(k % factor[i] == 0) {
				yes = 1;
				printf("%d\n", 100 / factor[i]);
				break;
			}
			if((100 - k) % factor[i] == 0) {
				yes = 1;
				printf("%d\n", 100 / factor[i]);
				break;
			}
		}
		if(!yes)
			puts("100");
	}
	return 0;
}