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
	constexpr int AB_MAX = 2, A = 0, B = 0;
	int N, M, a, b, tmp, ans;
	vector<vector<int>> ab;
	int dp[AB_MAX] = {-1,10000000};

	scanf("%d %d", &N, &M);
	int i, j, k;
	rep(i, M) {
		scanf("%d %d", &a, &b);
		vector<int> t;
		t.push_back(a);
		t.push_back(b);
		ab.push_back(t);
	}
	sort(ab.begin(), ab.end());
	ans = 1;
	rep(i, M) {//‘S•”‚Ì—v–]
		a = ab.at(i).at(0);//ˆê’U•Û
		b = ab.at(i).at(1);

		//Å‘P‚ğ‹‚ß‚Ä‚¢‚­¨dp‚ÖŠi”[
		//‘O•û”äŠr
		if (a >= dp[0]) {//Å‘P‚æ‚è‘å‚«‚¢
			if (a >= dp[1]) {//Å‘P‚ÌŒã•û‚Æˆê‚Ü‚½‚Í‘å‚«‚¢
				ans++;//Å‘P‚ğˆê‚Âi‚ß‚é
				dp[0] = a;
				dp[1] = b;
			}
			//Œã•û”äŠr
			if (b < dp[1]) {//Å‘P‚æ‚è¬‚³‚¢
				dp[1] = b;//Å‘P‚ğ‹·‚ß‚é
			}
		}
	}

	printf("%d", ans);

	return 0;
}