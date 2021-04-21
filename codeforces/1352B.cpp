#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(x, a, b) for(int x = a; x < b; ++x)
typedef pair<int, int> pii;
//0xACCE97ED;

int main() {
	int t, n, k, res[105];
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d", &n, &k);
		if(n % k == 0) {
			puts("YES");
			for(int i = 0; i < k; ++i) {
				printf("%d ", n / k);
			}
			puts("");
			continue;
		}
		int tmp = n / k;
		for(int i = 0; i < k; ++i) {
			res[i] = tmp;
		}
		int tmp1 = ((n / k) + 1);
		int tmp2 = ((n / k) - 1);
		int tmp3 = ((n / k) + k - 1 + n % k);
		int tmp4 = ((n / k) - k + 1 + n % k);
		int tmp5 = n / k + n % k;
		int tmp6 = n / k;
		if((tmp1 & 1) == (tmp4 & 1) && tmp1 > 0 && tmp4 > 0) {
			puts("YES");
			for(int i = 0; i < k - 1; ++i) {
				printf("%d ", tmp1);
			}
			printf("%d\n", tmp4);
		}
		else if((tmp2 & 1) == (tmp3 & 1) && tmp2 > 0 && tmp3 > 0) {
			puts("YES");
			for(int i = 0; i < k - 1; ++i) {
				printf("%d ", tmp2);
			}
			printf("%d\n", tmp3);
		}
		else if((tmp5 & 1) == (tmp6 & 1) && tmp5 > 0 && tmp6 > 0){
			puts("YES");
			for(int i = 0; i < k - 1; ++i) {
				printf("%d ", tmp6);
			}
			printf("%d\n", tmp5);
		}
		else puts("NO");
	}
	return 0;
}