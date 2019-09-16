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

ll i, j, k, tmp, ans, cnt, N, A, B, C, D, bi;
string s;

//scanf("%d",&N);

//printf("%d", ans);

//cout <<  << endl;
ll f(ll a) {
	return a - (a / C + a / D) + a/lcm(C,D);
}

int main(void) {
	scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
	
	cout << f(B) - f(A - 1);

	return 0;
}