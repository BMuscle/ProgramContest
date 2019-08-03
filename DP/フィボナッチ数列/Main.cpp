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
	�v���g�^�C�v�錾
------------------------------------------------------------*/
int fib1(int n);
int fib2(int n);
int fib3(int n);

int main(void) {
	printf("%d",fib3(10));
	return 0;
}
/*------------------------------------------------------------
	�t�B�{�i�b�`����̑S�T���i�ċA�j�o�[�W����
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
	�t�B�{�i�b�`����̃������i�ċA�j�o�[�W����
-------------------------------------------------------------*/
#define N_MAX 100
int memo[N_MAX];//�ő�l���̃�����p�� memo[i] ��i�Ōv�Z���ꂽ����

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
	�t�B�{�i�b�`����̓��I�v��@�ifor���[�v�j�o�[�W����
-------------------------------------------------------------*/
int dp[N_MAX];//�l��ۑ����Ă����z��dp
int fib3(int n) {
	dp[1] = 1;
	for(int i = 2; i <= n; i++){
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	return dp[n];
}