#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	string s;
	int t;
	bool alice = true;
	scanf("%d", &t);
	while(t--) {
		cin >> s;
		alice = true;
		while(1) {
			size_t t = s.find("01");
			if(t != string::npos) {
				s.erase(t, 2);
			}
			else if((t = s.find("10")) != string::npos) {
				s.erase(t, 2);
			}
			else {
				puts(alice ? "NET" : "DA");
				break;
			}
			alice ^= 1;
		}
	}
	return 0;
}