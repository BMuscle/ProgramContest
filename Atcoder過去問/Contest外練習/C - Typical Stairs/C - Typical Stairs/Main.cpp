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
	vector<LL> A;
	vector<int> a;
	cnt = 0;
	scanf("%d %d", &N, &M);
	if (M == 0) {
		a.push_back(0);
	}
	REP(i, M) {
		scanf("%d", &tmp);
		a.push_back(tmp);
	}
	REP(i, N+1) {
		A.push_back(0);
	}
	tmp = 0;
	A.at(0) = 1;
	if(a.at(cnt) != 1){
		A.at(1) = 1;
		
	}
	else {
		cnt++;
	}
	
	for (int i = 2; i < N+1; i++) {

		if (a.size() > cnt && i == a.at(cnt)) {
			cnt++;
			A.at(i) = 0;
		}
		else {
			A.at(i) = (A.at(i - 1) + A.at(i - 2)) % 1000000007LL;
			if (A.at(i) == 0) {
				printf("0\n");
				return 0;
			}
		}		
	}


	printf("%lld", A.at(N) % 1000000007);
	return 0;
}