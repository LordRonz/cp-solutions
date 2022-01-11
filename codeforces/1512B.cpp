#include <bits/stdc++.h>

using namespace std;

//0xACCE97ED;

int main() {
	int t, n; 
	char a[405][405];
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		for(int i = 0; i < n; ++i) {
			scanf("\n%s", a[i]);
		}
		int x1 = -1, x2 = -1, y1 = -1, y2 = -1;
		int x3, x4, y3, y4;
		for(int i = 0; i < n; ++i) {
			for(int j = 0; j < n; ++j) {
				if(a[i][j] == '*') {
					if(x1 != -1 && y1 != -1) {
						x2 = i;
						y2 = j;
						break;
					}
					else {
						x1 = i;
						y1 = j;
					}
				}
			}
		}
		if(x1 == x2) {
			x3 = x1 + 1 >= n ? x1 - 1 : x1 + 1;
			x4 = x3;
			y3 = y1, y4 = y2;
		}
		else if(y1 == y2) {
			y3 = y1 + 1 >= n ? y1 - 1 : y1 + 1;
			y4 = y3;
			x3 = x1, x4 = x2;
		}
		else {
			x3 = x1, y3 = y2;
			x4 = x2, y4 = y1;
		}
		for(int i = 0; i < n; ++i) {
			for(int j = 0; j < n; ++j) {
				if(i == x3 && j == y3) {
					printf("*");
				}
				else if(i == x4 && j == y4) {
					printf("*");
				}
				else printf("%c", a[i][j]);
			}
			puts("");
		}
	}
	return 0;
}