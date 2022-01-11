#include <bits/stdc++.h>

using namespace std;

//0xACCE97ED;

int main() {
    int n, t, c1, c2;
    scanf("%d", &t);
    for(int i = 0; i < t; ++i) {
        scanf("%d", &n);
        c1 = n / 3;
        c2 = n / 3;
        if(n % 3 == 2)
            ++c2;
        else if(n % 3 == 1)
            ++c1;
        printf("%d %d\n", c1, c2);
    }
	return 0;
}