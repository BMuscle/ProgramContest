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
int fib1(int n);
int fib2(int n);
int fib3(int n);

int main(void) {
	printf("%d",fib3(10));
	return 0;
}
/*------------------------------------------------------------
	フィボナッチ数列の全探索（再帰）バージョン
-------------------------------------------------------------*/
int fib1(int n) {
	if (n == 0) {
		return 0;
	}
	if (n == 1){
		return 1;
	}
	else {
		return fib1(n - 1) + fib1(n - 2);
	}
}

/*------------------------------------------------------------
	フィボナッチ数列のメモ化（再帰）バージョン
-------------------------------------------------------------*/
#define N_MAX 100
int memo[N_MAX];//最大値分のメモを用意 memo[i] はiで計算された結果

int fib2(int n) {
	if (memo[n] != 0) {
		return memo[n];
	}
	else if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}

	else {
		return memo[n] = fib2(n - 1) + fib2(n - 2);
	}
}
/*------------------------------------------------------------
	フィボナッチ数列の動的計画法（forループ）バージョン
-------------------------------------------------------------*/
int dp[N_MAX];//値を保存していく配列dp
int fib3(int n) {
	dp[1] = 1;
	for(int i = 2; i <= n; i++){
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	return dp[n];
}