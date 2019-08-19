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
	int N, i, j, k, tmp, cnt = 0, ans = 0;
	ll A, B, K;
	scanf("%lld %lld", &A, &B);
	K = (A + B) / 2;
	if (K * 2 == A + B) {
		printf("%lld\n", K);
	}
	else {
		printf("IMPOSSIBLE\n");
	}



	return 0;
}