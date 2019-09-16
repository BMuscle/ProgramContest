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

LL i, j, k, tmp, ans, cnt, N, K, Q;

int main(void) {
	vector<LL> A;
	vector<LL> p;
	scanf("%lld %lld %lld", &N, &K, &Q);

	REP(i, N) {
		p.push_back(K);
	}

	REP(i, Q) {
		scanf("%lld", &tmp);
		p.at(tmp - 1)++;
	}

	limit += Q;
	REP(i, N) {
		if (p.at(i) > limit) {
			printf("Yes\n");
		}
		else {
			printf("No\n");
		}
	}


	return 0;
}