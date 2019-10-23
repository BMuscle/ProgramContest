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

LL i, j, k, tmp, ans, cnt, N, A, B, M;
string s;

//scanf("%d",&N);

//printf("%d", ans);

//cout <<  << endl;


int main(void) {
	vector<pair<LL, LL>>vec;

	scanf("%lld %lld", &N, &M);
	for (LL i = 0; i < N; i++) {
		pair<LL, LL> P;
		scanf("%lld %lld", &A, &B);
		P.first = A;
		P.second = B;
		vec.push_back(P);
	}
	SORT(vec);
	for (LL i = 0; i < N && M > 0; i++) {
		if (M >= vec.at(i).second) {
			M -= vec.at(i).second;
			ans += vec.at(i).first * vec.at(i).second;
		}
		else {
			ans += vec.at(i).first * M;
			M = 0;
		}
	}
	
	printf("%lld", ans);
	return 0;
}