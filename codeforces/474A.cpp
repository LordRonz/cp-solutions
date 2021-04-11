#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	char lookup[3][11] = {
		"qwertyuiop",
		"asdfghjkl;",
		"zxcvbnm,./"
	};
	char lr, input[105];
	scanf("%c", &lr);
	scanf("%s", input);
	for(int i = 0, j = strlen(input); i < j; ++i) {
		if(lr == 'L') {
			for(int k = 0; k < 3; ++k) {
				for(int l = 0; l < 10; ++l) {
					if(lookup[k][l] == input[i]) {
						printf("%c", lookup[k][l + 1]);
					}
				}
			}
		}
		else {
			for(int k = 0; k < 3; ++k) {
				for(int l = 0; l < 10; ++l) {
					if(lookup[k][l] == input[i]) {
						printf("%c", lookup[k][l - 1]);
					}
				}
			}
		}
	}
	puts("");
	return 0;
}