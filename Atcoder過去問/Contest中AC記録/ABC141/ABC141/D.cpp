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


string s;

//scanf("%d",&N);

//printf("%d", ans);

//cout <<  << endl;

//”ƒ‚Á‚½l‚É‘«‚µ‚Ä‚¢‚­‚æ‚¤‚É‚·‚é
LL limit = 0;//Ÿ‚¿•‰‚¯‚ªŒˆ‚Ü‚éƒ‰ƒCƒ“

LL i, j, k, tmp, ans, cnt, N, K, Q, M;

int main(void) {
	priority_queue<LL> p;

	scanf("%d %d", &N, &M);
	REP(i, N) {
		scanf("%lld", &tmp);
		p.push(tmp);
	}
	REP(i, M) {
		j = p.top() / 2;
		p.pop();
		p.push(j);
	}

	REP(i, N) {
		ans += p.top();
		p.pop();
	}
	printf("%lld", ans);

	return 0;
}