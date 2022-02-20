#include <bits/stdc++.h>

using namespace std;
//0xACCE97ED;

int main() {
    int t, a[7];
    scanf("%d", &t);
    while(t--) {
        int n;
        bool yes = false;
        int res[3];
        for(int i = 0; i < 7; ++i) {
            scanf("%d", a + i);
        }
        for(int i = 0; i < 4; ++i) {
            for(int j = i + 1; j < 5; ++j) {
                for(int k = j + 1; k < 6; ++k) {
                    if((a[i] + a[j] + a[k]) == a[6]) {
                        res[0] = a[i];
                        res[1] = a[j];
                        res[2] = a[k];
                        yes = true;
                        break;
                    }
                }
                if(yes) break;
            }
            if(yes) break;
        }
        printf("%d %d %d\n", res[0], res[1], res[2]);
    }
	return 0;
}
