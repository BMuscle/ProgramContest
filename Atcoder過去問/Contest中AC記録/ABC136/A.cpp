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

int i, j, k, tmp;

int main(void) {
	int A, B, C, ans;

	scanf("%d %d %d", &A, &B, &C);
	ans = C - (A - B);
	if (ans < 0) {
		printf("0");
	}
	else {
		printf("%d", ans);
	}
	return 0;
}