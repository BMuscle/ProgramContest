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

int i, j, k, cnt, N, K, sum;
double ans, tmp, probability;
string s;

//scanf("%d",&N);

//printf("%d", ans);

//cout <<  << endl;


int main(void) {
	scanf("%d %d", &N, &K);
	FOR(i, 1, N + 1) {
		probability = (double)1 / N;
		sum = i;
		while (sum < K) {
			probability *= (double)1 / 2;
			sum *= 2;
		}
		ans += probability;
	}

	printf("%.16f", ans);
	return 0;
}