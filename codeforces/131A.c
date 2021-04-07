#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void)
{
	char s[100];
    bool woke = false;
	bool realShit = false;
	bool safe = false;
    scanf("%s", s);
	for(int i = 1; i < strlen(s); ++i) {
		if(realShit) {
			s[i] += 32;
		}
		if(s[i] < 97 && !safe) {
			woke = true;
		}
		else if(s[i] > 96) {
			woke = false;
			safe = true;
		}
		if(i == strlen(s) - 1 && woke && !realShit) i = 0, realShit = true;;
	}
	if(strlen(s) == 1) realShit = true;
	if(realShit) s[0] = s[0] > 96 ? s[0] - 32 : s[0] + 32;
	printf("%s\n", s);
    return 0;
}