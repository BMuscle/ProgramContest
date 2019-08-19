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

int main(void) {
	ll N, i, j, k, tmp, ans, sum = 0;

	vector<ll>A, B;

	scanf("%lld", &N);

	rep(i, N + 1) {
		scanf("%lld", &tmp);
		A.push_back(tmp);
	}
	rep(i, N) {
		scanf("%lld", &tmp);
		B.push_back(tmp);
	}
	for (i = N - 1; i >= 0; i--) {
		if (A.at(i + 1) > B.at(i)) {
			sum += B.at(i);//引ける値Aはどうでもいい
			B.at(i) = 0;//Bが小さければ全部使い切る
		}
		else {//Bが大きければ
			tmp = A.at(i + 1);
			sum += tmp;//A全部使う
			B.at(i) -= tmp;//A使った分使う
		}
		if (A.at(i) > B.at(i)) {
			tmp = B.at(i);//引ける値Aはどうでもいい
			sum += tmp;
			A.at(i) -= tmp;//引いた分使う
			B.at(i) = 0;//Bが小さければ全部使い切る
		}
		else {//Bが大きければ
			tmp = A.at(i);
			sum += tmp;//A全部使う
			A.at(i) = 0;
			B.at(i) -= tmp;//A使った分使う
		}

	}
	printf("%lld", sum);




	return 0;
}