#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
#include <math.h>
#include <array>
#include <vector>
#include <queue>
#include <stack>
#include <numeric>
#include <list>
#include <deque>
#include <map>
#include <set>

using namespace std;

typedef long long LL;
typedef pair<int, int>PII;

#define FOR(i,a,b) for(int i = (a); i < (b); ++i)
#define REP(i,n) FOR(i,0,n)
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), rend()
#define PB pushback
#define SORT(c) sort((c).begin(),(c).end())

const LL INF = 1LL << 60;

//priority_queue<int> p;

int i, j, k, tmp, ans, cnt, N, M;
string s;

//scanf("%d",&N);

//printf("%d", ans);

//cout <<  << endl;


int main(void) {
	scanf("%d %d", &N, &M);
	int l, r;
	int L = 1, R = N;
	REP(i, M) {
		scanf("%d %d", &l, &r);
		if (l > L) {
			L = l;
		}
		if (r < R) {
			R = r;
		}
	}
	ans = R - L + 1;
	if (ans < 0) {
		ans = 0;
	}

	printf("%d", ans);

	return 0;
}