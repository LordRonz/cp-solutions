#include <stdio.h>

int main(void)
{
	int total = 0, freq[28] = {};
	char c;
	while((c = getchar()) != EOF && c != '\n') {
		if(c > 96 && c < 123) {
			++freq[c - 'a'];
		}
	}
	for(int i = 0; i < 28; ++i) {
		if(freq[i] > 0) ++total;
	}
	printf("%d\n", total);
	return 0;
}