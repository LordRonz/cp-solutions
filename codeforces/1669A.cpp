#include <bits/stdc++.h>

using namespace std;
//0xACCE97ED;

int main() {
    int t, a;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &a);
        int b = 1;
        if (a <= 1399) {
            b = 4;
        } else if (a <= 1599) {
            b = 3;
        } else if (a <= 1899) {
            b = 2;
        }
        printf("Division %d\n", b);
    }
	return 0;
}