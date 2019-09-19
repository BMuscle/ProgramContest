#include "ProconLib.h"
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
#include <math.h>
#include <array>
#include <vector>
#include <queue>
#include <stack>
#include <numeric>
#include <list>
#include <deque>
#include <map>
#include <set>

using namespace std;

typedef long long LL;
typedef pair<int, int>PII;

#define FOR(i,a,b) for(int i = (a); i < (b); ++i)
#define REP(i,n) FOR(i,0,n)
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), rend()
#define PB pushback
#define SORT(c) sort((c).begin(),(c).end())


/*------------------------------------------
	�֐����Fchmin
	�@�@�\�Fa��b�̏������ق���a�ɑ������
	���@���Fa b
	�߂�l�Ftrue = b�������� false a��������
-------------------------------------------*/
template<class T> inline bool chmin(T& a, T b) {
	if (a > b) {
		a = b;
		return true;
	}
	return false;
}
/*------------------------------------------
	�֐����Fchmax
	�@�@�\�Fa��b�̑傫���ق���a�ɑ������
	���@���Fa b
	�߂�l�Ftrue = b���傫�� false a���傫��
-------------------------------------------*/
template<class T> inline bool chmax(T& a, T b) {
	if (a < b) {
		a = b;
		return true;
	}
	return false;
}

/*------------------------------------------
	�֐����Fgcd
	�@�@�\�Fa/b �̍ő���񐔂����߂�
	���@���Fa b
	�߂�l�FT
-------------------------------------------*/
template<class T> inline T gcd(T a, T b) {
	T candidate = a;
	while (b % a != 0) {
		candidate = b % a;
		b = a;
		a = candidate;
	}
	return candidate;
}
/*------------------------------------------
	�֐����Flcm
	�@�@�\�Fa b �̍ő���{�������߂�
	���@���Fa b
	�߂�l�FT
-------------------------------------------*/
template<class T> inline T lcm(T a, T b) {
	return (a * b) / gcd(a, b);
}

/*------------------------------------------
	�֐����FEratosthenes
	�@�@�\�F�G���g�X�e�l�X��⿁@�z��ɑf�����i�[����
	���@���Fvector<bool> true�͑f�� false�͔�f�����i�[�����
			N 1~N�܂ł͈̔͂Ŕ��肷��
	�߂�l�Fbool�@vector�̃T�C�Y�I�[�o�[��false
-------------------------------------------*/
template<class T> inline bool Eratosthenes(vector<bool>& v, T N) {
	if (N + 1 > v.size()) {//�T�C�Y�`�F�b�N
		v.resize(N + 1, true);
	}
	else {
		return false;
	}
	v.at(0) = false;//�f�����珜�O
	v.at(1) = false;

	for (T i = 2; i <= sqrt(N); i++) {
		if (v.at(i)) {//i���f���Ȃ�
			for (T j = 2; i * j <= N; j++) {//j = i�̔{�� 
				v.at(i * j) = false;//�f������O��
			}
		}
	}
	return true;
}
