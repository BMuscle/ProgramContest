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

int i, j, k, tmp, cnt, N, Q, t1, t2;
string s;

//scanf("%d",&N);

//printf("%d", ans);

//cout <<  << endl;


int main(void) {
	scanf("%d %d", &N, &Q);
	cin >> s;
	vector<int> flag(s.size()+1,0);
	vector<int> ans;
	vector<int>l;
	vector<int>r;
	REP(i, s.size()) {
		if (s.substr(i, 2) == "AC") {
			flag.at(i+1) = flag.at(i) + 1;
		}
		else {
			flag.at(i+1) = flag.at(i);
		}
	}
	REP(i, Q) {
		scanf("%d %d", &t1, &t2);
		t1--;
		t2--;
		l.push_back(t1);
		r.push_back(t2);
	}
	REP(i, Q) {
		ans.push_back(flag.at(r.at(i)) - flag.at(l.at(i)));
	}


	REP(i, ans.size()) {
		printf("%d\n", ans.at(i));
	}
	return 0;
}