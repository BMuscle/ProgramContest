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
	�i�b�v�T�b�N���̑S�T��
-------------------------------------------------------------*/
int nap1(int i, int j) {//i�͌��݌��Ă���i�� j�͎c�����d��
	int res;
	if (i == N) {//�S�ĒT�����I�������
		res = 0;
	}
	else if (j - w[i] < 0) {//���̕i��������Ȃ���
		res = nap1(i + 1, j);//���̕i����
	}
	else {//�����ꍇ�Ɠ���Ȃ��ꍇ������
		//max�œ��ꂽ�Ƃ��Ɠ���Ȃ����̐�X�̈�ԑ傫���������
		res = max(nap1(i + 1, j), nap1(i + 1, j - w[i]) + v[i]);
	}
	return res;
}

/*------------------------------------------------------------
	�i�b�v�T�b�N���̃�����
-------------------------------------------------------------*/
int memo[N+1][W+1];


int nap2(int i, int j) {//i�͌��݌��Ă���i�� j�͎c�����d��
	int res;
	if (i == N) {//�S�ĒT�����I�������
		res = 0;
	}
	else if(memo[i][j] != 0){
		res = memo[i][j];
	}
	else if (j - w[i] < 0) {//���̕i��������Ȃ���
		res = nap2(i + 1, j);//���̕i����
	}
	else {//�����ꍇ�Ɠ���Ȃ��ꍇ������
		//max�œ��ꂽ�Ƃ��Ɠ���Ȃ����̐�X�̈�ԑ傫���������
		res = max(nap2(i + 1, j), nap2(i + 1, j - w[i]) + v[i]);
	}
	memo[i][j] = res;
	return res;
}
/*------------------------------------------------------------
	�i�b�v�T�b�N���̓��I�v��@�łP
-------------------------------------------------------------*/
int dp[N + 1][W + 1];


int nap3(int i, int j) {//i�͌��݌��Ă���i�� j�͎c�����d��
	for (int i = N - 1; i >= 0; i--) {
		for (int j = 0; j <= W; j++) {
			if (j < w[i]) {//����Ȃ���
				dp[i][j] = dp[i + 1][j];
			}
			else {//���鎞 �����ق������l���傫���̂���max��
				dp[i][j] = max(dp[i + 1][j], dp[i + 1][j - w[i]] + v[i]);
			}
		}
	}	
	return dp[0][W];
}

/*
dp[i + 1][j - w[i]] + v[i] ���ꂪ����\�����H
j - w[i]�ō����Ă���i�����̏d����������j�ɔ��
i + 1�ō����Ă��鏤�i�������ĂȂ��ꏊ��\��
�������Ă��鏤�i�������ĂȂ��������Ă��鏤�i�����邾���̋󂫂�����ꏊ
������͂����܂ł̍ő�l�����łɓ����Ă���͂�
���\�Ō����Ȃ獶��

dp[i][j] = dp[i + 1][j]
�������̎��͍���j�ł͂�������Ȃ���Ԃ̉��l������Ă���

�������ׂ�

*/

/*------------------------------------------------------------
	�i�b�v�T�b�N���̓��I�v��@��2
-------------------------------------------------------------*/

int nap4(int i, int j) {//i�͌��݌��Ă���i�� j�͎c�����d��
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= W; j++) {
			if (j < w[i]) {//����Ȃ���
				dp[i + 1][j] = dp[i][j];
			}
			else {//���鎞 �����ق������l���傫���̂���max��
				dp[i + 1][j] = max(dp[i][j], dp[i][j - w[i]] + v[i]);
			}
		}
	}
	return dp[N][W];
}