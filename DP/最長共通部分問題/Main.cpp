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

void longstr1();
#define N 4
#define M 4
int i, j, k, tmp;
int dp[N+1][M+1];
string s = "abcd" , t = "becd";

int main(void) {
	longstr1();
	return 0;
}
/*------------------------------------------------------------------------
	“®“IŒv‰æ–@
-------------------------------------------------------------------------*/
void longstr1() {
	rep(i, N) {
		rep(j, M) {
			if (s[i] == t[j]) {
				dp[i+1][j+1] = dp[i][j] + 1;
			}
			else {
				dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i+1][j]);
			}
		}
	}
	
	printf("%d", dp[4][4]);
}