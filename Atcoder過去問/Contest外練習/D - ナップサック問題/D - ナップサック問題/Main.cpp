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

int dp[1001][1001];
//i , j i”Ô–Ú‚Ü‚Å‚Ì”Ô†‚ğg‚Á‚½, j”Ô–Ú‚Ü‚Å‚Ìd‚³§ŒÀ‚Å
int main(void) {
	int N, W, i, j, k, tmp1, tmp2;
	vector<array<int, 2>>vw;

	scanf("%d %d", &N, &W);

	rep(i, N) {
		scanf("%d %d", &tmp1, &tmp2);
		array<int, 2> t;
		t.at(0) = tmp1;
		t.at(1) = tmp2;
		vw.push_back(t);
	}

	rep(i, N) {
		rep(j, W + 1) {
			if (j < vw.at(i).at(1)) {
				dp[i+1][j] = dp[i][j];
			}
			else {
				dp[i + 1][j] = max(dp[i][j], dp[i][j - vw.at(i).at(1)] + vw.at(i).at(0));
			}

		}
	}
	printf("%d", dp[N][W]);




	return 0;
}