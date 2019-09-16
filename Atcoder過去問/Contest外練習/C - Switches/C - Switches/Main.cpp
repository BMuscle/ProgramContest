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

int i, j, k,l, tmp, cnt, N, M, cnt2;
LL ans;

//scanf("%d",&N);

//printf("%d", ans);

//cout <<  << endl;




int main(void) {

	vector<vector<int>> s;
	vector<int> p;


	scanf("%d %d", &N, &M);

	REP(i, M) {
		scanf("%d", &k);
		vector<int> t;
		REP(j, k) {
			scanf("%d", &tmp);
			t.push_back(tmp - 1);
		}
		s.push_back(t);
	}
	REP(i, M) {
		scanf("%d", &tmp);
		p.push_back(tmp);
	}
	int bit;
	FOR(bit, 0, (1 << N)) {
		cnt2 = 0;
		REP(k, M) {//c•ûŒü
			cnt = 0;
			REP(l, s.at(k).size()) {//‰¡•ûŒü
				if (((1 << s.at(k).at(l)) & bit) > 0) {
					cnt++;
				}
			}
			if ((cnt % 2) == p.at(k)) {
				cnt2++;
			}
		}

		if (cnt2 == M) {
			ans++;
		}
	}
	printf("%lld", ans);
	return 0;
}