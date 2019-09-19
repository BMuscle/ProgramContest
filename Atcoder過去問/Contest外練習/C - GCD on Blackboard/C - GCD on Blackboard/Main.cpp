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

int i, j, k, tmp, ans, cnt, N;
string s;

//scanf("%d",&N);

//printf("%d", ans);

//cout <<  << endl;

/*------------------------------------------
	関数名：gcd
	機　能：a/b の最大公約数を求める
	引　数：a b
	戻り値：T
-------------------------------------------*/
template<class T> inline T gcd(T a, T b) {
	T candidate = a;
	if (a == 0) {
		return b;
	}
	while (b % a != 0) {
		candidate = b % a;
		b = a;
		a = candidate;
	}
	return candidate;
}

template<class T> inline bool chmax(T& a, T b) {
	if (a < b) {
		a = b;
		return true;
	}
	return false;
}

int m1, m2;

int main(void) {
	

	scanf("%d", &N);


	vector<int> A(N, 0);
	vector<int> L(N + 1, 0);
	vector<int> R(N + 1, 0);

	REP(i, N) {
		scanf("%d", &tmp);
		A.at(i) = tmp;
	}

	for(int i = 0; i < N; ++i){
		L.at(i+1) = gcd(L.at(i), A.at(i));
	}
	for (int i = N - 1; i >= 0; --i) {
		R.at(i) = gcd(R.at(i + 1), A.at(i));
	}

	//集計
	int res = 0;

	REP(i, N) {
		int l = L.at(i);
		int r = R.at(i + 1);
		chmax(res, gcd(l, r));
	}
	
	cout << res;

	return 0;
}