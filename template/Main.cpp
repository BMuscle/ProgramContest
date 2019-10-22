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
#include <cstdlib>

using namespace std;

typedef long long LL;
typedef pair<int, int>PII;

#define FOR(i,a,b) for(int i = (a); i < (b); ++i)
#define REP(i,n) FOR(i,0,n)
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), rend()
#define PB pushback
#define SORT(c) sort((c).begin(),(c).end())

const LL INF = 1LL << 60;

//priority_queue<int> p;




//scanf("%d",&N);

//printf("%d", ans);

//cout <<  << endl;

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

LL i, j, k, tmp, ans, cnt, N, M, A, B;
bool flag = true;

/*------------------------------------------
	関数名：Eratosthenes
	機　能：エラトステネスの篩　配列に素数を格納する
	引　数：vector<bool> trueは素数 falseは非素数が格納される
			N 1~Nまでの範囲で判定する
	戻り値：bool　vectorのサイズオーバー時false
-------------------------------------------*/
template<class T> inline bool Eratosthenes(vector<bool>& v, T N) {
	if (N + 1 > v.size()) {//サイズチェック
		v.resize(N + 1, true);
	}
	else {
		return false;
	}
	v.at(0) = false;//素数から除外
	v.at(1) = false;

	for (T i = 2; i <= sqrt(N); i++) {
		if (v.at(i)) {//iが素数なら
			for (T j = 2; i * j <= N; j++) {//j = iの倍数 
				v.at(i * j) = false;//素数から外す
			}
		}
	}
	return true;
}



int main(void) {
	vector<LL> v;
	scanf("%lld %lld", &A, &B);
	if (A < B) {
		LL work = B;
		B = A;
		A = work;
	}
	for (LL i = 1; i < A / 2 +1; i++) {
		if (A % i == 0 && B % i == 0) {
			v.push_back(i);
		}
	}
	
	vector<bool> b;

	if (v.size() >= 2) {
		Eratosthenes(b, v.at(v.size() - 1));

		for (LL i = 0; i < v.size(); i++) {
			if (b.at(v.at(i)) == true) {
				ans++;
			}
		}
	}
	printf("%lld", ans + 1);

	
	return 0;
}