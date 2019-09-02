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
	ll i, j, k, ans = 0, cnt = 0, N, tmp, at, M = 0;

	scanf("%lld", &N);
	for (i = 1; i <= N - 1; i++) {
		M += i;
	}
	printf("%lld", M);
	return 0;
}