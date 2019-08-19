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

int N, i, j, k, tmp, h, w, t;

int main(void) {
	int K, X, ans;
	scanf("%d %d", &K, &X);

	tmp = X - K + 1;
	for (i = tmp; i <= X + K - 1; i++) {

		printf("%d ", i);
	}

	return 0;
}