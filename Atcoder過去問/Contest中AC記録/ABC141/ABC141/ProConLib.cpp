#include "ProconLib.h"

/*------------------------------------------
	関数名：chmin
	機　能：aとbの小さいほうをaに代入する
	引　数：a b
	戻り値：true = bが小さい false aが小さい
-------------------------------------------*/
template<class T> inline bool chmin(T& a, T b) {
	if (a > b) {
		a = b;
		return true;
	}
	return false;
}
/*------------------------------------------
	関数名：chmax
	機　能：aとbの大きいほうをaに代入する
	引　数：a b
	戻り値：true = bが大きい false aが大きい
-------------------------------------------*/
template<class T> inline bool chmax(T& a, T b) {
	if (a < b) {
		a = b;
		return true;
	}
	return false;
}

/*------------------------------------------
	関数名：gcd
	機　能：a/b の最大公約数を求める
	引　数：a b
	戻り値：T
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
	関数名：lcm
	機　能：a b の最大公倍数を求める
	引　数：a b
	戻り値：T
-------------------------------------------*/
template<class T> inline T lcm(T a, T b) {
	return (a * b) / gcd(a, b);
}