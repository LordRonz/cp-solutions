#include <bits/stdc++.h>

using namespace std;

//0xACCE97ED;

int main() {
    int t, a, b, c;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d %d", &a, &b, &c);
        int diff = abs(a - b);
        if(a > diff * 2 || b > diff * 2 || c > diff * 2) {
            puts("-1");
            continue;
        }
        if(c + diff <= diff * 2) {
            printf("%d\n", c + diff);
        }
        else if(c - diff > 0 && c - diff <= diff * 2) {
            printf("%d\n", c - diff);
        }
        else puts("-1");
    }
	return 0;
}
