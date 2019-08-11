#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
#include <math.h>
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

ll N, M, i, j, k, h, w, tmp, A, B, ma;

ll dp[10000000];


int main(void) {
	vector<ll[2]> ab;
	ma = 0;
	scanf("%lld %lld", &N, &M);

	for (i = 0; i < N; i++) {
		scanf("%lld %lld", &A, &B);
		ll tmp[2] = { A,B };
		ab.push_back(tmp);
	}
	sort(ab.begin(), ab.end());
	ll left = 0;
	for (i = 1; i <= M; i++) {
		for (j = left; j < N; j++) {
			if (i - ab.at(j)[0]  >= 0) {
				ma = max(ma, ab.at(j)[1] + dp[i - 1]);
			}
			else {
				dp[i] = ma;
				left = j;
				break;
			}
		}
	}

	printf("%lld", dp[M]);

	return 0;
}