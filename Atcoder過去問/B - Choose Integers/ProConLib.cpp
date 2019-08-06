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