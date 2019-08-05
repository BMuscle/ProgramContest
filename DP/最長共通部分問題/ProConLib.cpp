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