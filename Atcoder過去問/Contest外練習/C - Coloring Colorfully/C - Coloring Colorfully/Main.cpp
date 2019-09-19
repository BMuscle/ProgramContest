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

int i, j, k, tmp, ans, cnt, N, m;
string s;

//scanf("%d",&N);

//printf("%d", ans);

//cout <<  << endl;

/*------------------------------------------
	関数名：chmin
	機　能：aとbの小さいほうをaに代入する
	引　数：a b
	戻り値：true = bが小さい false aが小さい
-------------------------------------------*/
template<class T> inline bool chmin(T& a, T b) {
	if (a > b) {
		a = b;
		return true;
	}
	return false;
}


int main(void) {
	cin >> s;
	REP(i, s.size()) {//←黒パターン
		if ((i & 1) == 0) {
			if (s.at(i) == '1') {
				cnt++;
			}
		}
		else {
			if (s.at(i) == '0') {
				cnt++;
			}
		}
	}
	ans = cnt;
	cnt = 0;
	REP(i, s.size()) {//←白パターン
		if ((i & 1) == 1) {
			if (s.at(i) == '1') {
				cnt++;
			}
		}
		else {
			if (s.at(i) == '0') {
				cnt++;
			}
		}
	}

	chmin(ans, cnt);

	printf("%d", ans);
	
	return 0;
}