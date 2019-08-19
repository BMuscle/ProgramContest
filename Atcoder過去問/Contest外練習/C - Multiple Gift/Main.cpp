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
	ll X, Y, i, j, k, cnt = 0;
	scanf("%lld %lld", &X, &Y);
	while (X <= Y) {
		X *= 2;
		cnt++;
	}

	printf("%d", cnt);




	return 0;
}