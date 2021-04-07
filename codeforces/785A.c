#include <stdio.h>
#include <string.h>

int main(void)
{
	int n, tot = 0;
	char s[20];
	scanf("%d", &n);
	while(n--) {
		scanf("%s", s);
		if(strcmp(s, "Tetrahedron") == 0) {
			tot += 4;
		}
		else if(strcmp(s, "Cube") == 0) {
			tot += 6;
		}
		else if(strcmp(s, "Octahedron") == 0) {
			tot += 8;
		}
		else if(strcmp(s, "Dodecahedron") == 0) {
			tot += 12;
		}
		else tot += 20;
	}
	printf("%d\n", tot);
	return 0;
}