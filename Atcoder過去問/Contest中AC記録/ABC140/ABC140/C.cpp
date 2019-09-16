#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
#include <math.h>
#include <vector>
#include <array>
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

	int i, j, k, tmp, n, ans = 0, prev = 0, b = 0;
	vector<int> B;

	scanf("%d", &n);
	rep(i, n - 1) {
		scanf("%d", &tmp);
		B.push_back(tmp);
	}
	ans = B.at(0);
	b = ans;
	for (i = 1; i < n - 1; i++) {
		ans += min(B.at(i), b);
		b = B.at(i);
	}
	ans += B.at(n - 2);
	printf("%d", ans);


	return 0;
}