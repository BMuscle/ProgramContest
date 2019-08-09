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
	int Coins[6] = { 500, 100, 50, 10, 5, 1 };
	int i, j, k, P, ans = 0, cnt, tmp;

	scanf("%d", &P);
	P = 1000 - P;
	rep(i, 6) {
		cnt = P / Coins[i];
		P -= cnt * Coins[i];
		ans += cnt;
	}
	printf("%d\n", ans);

	return 0;
}