#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
#include <math.h>
#include <queue>

#define rep(i,n) for(int i = 0; i <(n); i++)
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

template<class T> inline bool chmin(T& a, T b) {
	if (a > b) {
		a = b;
		return true;
	}
	return false;
}



int main(void) {
	int i, j, k, ans = 0, cnt = 0, N, tmp, at, M = 0;
	bool flag = false;
	vector<queue<int>> A;

	scanf("%d", &N);
	rep(i, N) {
		queue<int> t;
		rep(j, N - 1) {
			scanf("%d", &tmp);
			t.push(tmp);
		}
		A.push_back(t);
	}
	rep(i, N - 1){
		rep(j, N) {
		}
	}


	return 0;
}