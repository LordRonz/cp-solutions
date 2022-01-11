#include <bits/stdc++.h>

using namespace std;

//0xACCE97ED;

int main() {
	int t, n, a[105];
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		for(int i = 0; i < n; ++i) {
            scanf("%d", a + i);
        }
        sort(a, a + n);
        int cnt = 0;
        int key = 0;
        for(int i = 0; i < n; ++i) {
            if(!i) {
                key = a[i];
            }
            else if(key != a[i]) {
                break;
            }
            ++cnt;
        }
        printf("%d\n", n - cnt);
	}
	return 0;
}