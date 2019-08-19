#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
#include <math.h>
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

int dp[100][100];

int main(void) {
	int N, W, i, j, k, tmp, v, w;
	vector<array<int,2>>bag;

	scanf("%d %d", &N, &W);
	rep(i, N) {
		scanf("%d %d", &v, &w);
		array<int, 2> t;
		t[0] = w;
		t[1] = v;
		bag.push_back(t);
	}
	sort ( bag.begin(), bag.end());
	for(int i = 1; i <= N; i++){
		for(j = 1;j < W+1;j++) {
			if (j - bag[i-1][0] >= 0) {
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - bag[i-1][0]] + bag[i-1][1]);
			}
			else {
				dp[i][j] = dp[i - 1][j];
			}
		}
	}
	printf("%d", dp[N][W]);


	return 0;
}