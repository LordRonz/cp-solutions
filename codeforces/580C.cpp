#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

struct Tree {
	bool cat = false;
	int index = 0;
    vector<Tree*> child;
};

int main()
{
	Tree* a[100005] = {};
	int catto[100005] = {};
	bool visited[100005] = {};
	queue<Tree*> q;
	int n, m, tmp, x, y;
	scanf("%d %d", &n, &m);
	for(int i = 1; i <= n; ++i) {
		scanf("%d", &tmp);
		a[i] = new Tree;
		a[i]->cat = tmp;
		a[i]->index = i;
	}
	for(int i = 1; i < n; ++i) {
		scanf("%d %d", &x, &y);
		a[x]->child.push_back(a[y]);
		a[y]->child.push_back(a[x]);
	}
	q.push(a[1]);
	x = 0;
	while(!q.empty()) {
		Tree* t = q.front();
		visited[t->index] = true;
		q.pop();
		if(t->cat) ++catto[t->index];
		else catto[t->index] = 0;
		if(catto[t->index] > m) {
			continue;
		}
		bool found = false;
		for(int i = 0; i < t->child.size(); ++i) {
			if(t->child[i] && !visited[t->child[i]->index]) {
				found = true;
				q.push(t->child[i]);
				catto[t->child[i]->index] = catto[t->index];
			}
		}
		if(!found) {
			++x;
		}
	}
	printf("%d\n", x);
	return 0;
}