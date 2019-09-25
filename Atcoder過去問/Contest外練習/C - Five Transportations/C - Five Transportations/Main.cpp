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

LL i, j, k, tmp, ans, cnt, N;
string s;

//scanf("%d",&N);

//printf("%d", ans);

//cout <<  << endl;

LL roundUP(LL div1, LL div2) {
	return (div1 + div2 - 1) / div2;
}

int main(void) {
	vector<LL> trans;
	scanf("%lld", &N);

	for(int i = 0; i < 5; i++){
		scanf("%lld", &tmp);
		trans.push_back(tmp);
	}
	LL neck = roundUP(N, trans.at(0));
    ans += roundUP(N, trans.at(0));
	
	for(int i = 1; i < 5; i++){
		if (neck < roundUP(N, trans.at(i))) {
			ans += roundUP(N,trans.at(i)) - (neck - 1);
			neck = roundUP(N, trans.at(i));

		}
		else {
			ans += 1;

		}
	}

	printf("%lld", ans);
	return 0;
}