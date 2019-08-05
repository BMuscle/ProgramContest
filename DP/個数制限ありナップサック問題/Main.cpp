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
/*------------------------------------------------------------
	プロトタイプ宣言
------------------------------------------------------------*/
int nap1(int i, int j);
int nap2(int i, int j);
int nap3(int i, int j);
int nap4(int i, int j);

#define N 4
#define W 5

int w[N] = { 2, 1, 3, 2 };
int v[N] = { 3, 2, 4, 2 };

int main() {
	printf("%d", nap4(0, W));
	return 0;
}
/*------------------------------------------------------------
	ナップサック問題の全探索
-------------------------------------------------------------*/
int nap1(int i, int j) {//iは現在見ている品物 jは残り入る重さ
	int res;
	if (i == N) {//全て探索し終わった時
		res = 0;
	}
	else if (j - w[i] < 0) {//今の品物が入らない時
		res = nap1(i + 1, j);//次の品物へ
	}
	else {//入れる場合と入れない場合を試す
		//maxで入れたときと入れない時の先々の一番大きい方を取る
		res = max(nap1(i + 1, j), nap1(i + 1, j - w[i]) + v[i]);
	}
	return res;
}

/*------------------------------------------------------------
	ナップサック問題のメモ化
-------------------------------------------------------------*/
int memo[N+1][W+1];


int nap2(int i, int j) {//iは現在見ている品物 jは残り入る重さ
	int res;
	if (i == N) {//全て探索し終わった時
		res = 0;
	}
	else if(memo[i][j] != 0){
		res = memo[i][j];
	}
	else if (j - w[i] < 0) {//今の品物が入らない時
		res = nap2(i + 1, j);//次の品物へ
	}
	else {//入れる場合と入れない場合を試す
		//maxで入れたときと入れない時の先々の一番大きい方を取る
		res = max(nap2(i + 1, j), nap2(i + 1, j - w[i]) + v[i]);
	}
	memo[i][j] = res;
	return res;
}
/*------------------------------------------------------------
	ナップサック問題の動的計画法版１
-------------------------------------------------------------*/
int dp[N + 1][W + 1];


int nap3(int i, int j) {//iは現在見ている品物 jは残り入る重さ
	for (int i = N - 1; i >= 0; i--) {
		for (int j = 0; j <= W; j++) {
			if (j < w[i]) {//入らない時
				dp[i][j] = dp[i + 1][j];
			}
			else {//入る時 入れるほうが価値が大きいのかをmaxで
				dp[i][j] = max(dp[i + 1][j], dp[i + 1][j - w[i]] + v[i]);
			}
		}
	}	
	return dp[0][W];
}

/*
dp[i + 1][j - w[i]] + v[i] これが何を表すか？
j - w[i]で今見ている品物分の重さを引いたjに飛ぶ
i + 1で今見ている商品が入ってない場所を表す
→今見ている商品が入ってないかつ今見ている商品が入るだけの空きがある場所
→それはそこまでの最大値がすでに入っているはず
→表で言うなら左下

dp[i][j] = dp[i + 1][j]
こっちの式は今のjではもう入らない状態の価値を取ってくる

これらを比べる

*/

/*------------------------------------------------------------
	ナップサック問題の動的計画法版2
-------------------------------------------------------------*/

int nap4(int i, int j) {//iは現在見ている品物 jは残り入る重さ
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= W; j++) {
			if (j < w[i]) {//入らない時
				dp[i + 1][j] = dp[i][j];
			}
			else {//入る時 入れるほうが価値が大きいのかをmaxで
				dp[i + 1][j] = max(dp[i][j], dp[i][j - w[i]] + v[i]);
			}
		}
	}
	return dp[N][W];
}