#include "ProconLib.h"

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