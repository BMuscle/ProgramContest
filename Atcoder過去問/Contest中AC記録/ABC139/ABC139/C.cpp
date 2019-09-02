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



int main(void) {
	ll i, j, k, ans = 0, cnt = 0, N, tmp, at;
	ll ma = 0;

	scanf("%lld", &N);
	scanf("%lld", &tmp);
	for (i = 0; i < N - 1; i++) {
		scanf("%lld", &at);
		if (tmp >= at) {
			cnt++;
			tmp = at;
			ma = max(ma, cnt);
		}
		else {
			tmp = at;
			cnt = 0;
		}
	}
	printf("%lld", ma);

	return 0;
}