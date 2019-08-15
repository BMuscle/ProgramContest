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
	int N, i, j, k, tmp, ans = 0;
	vector<int> w;
	scanf("%d", &N);
	rep(i, N) {
		scanf("%d", &tmp);
		w.push_back(tmp);
	}

	rep(i, N) {
		if (w.at(i) != -1) {//荷物が残っている
			for (j = i + 1; j < N; j++) {
				if (w.at(i) >= w.at(j) && w.at(j) != -1) {//積み重ねれる時
					w.at(i) = w.at(j);
					w.at(j) = -1;
				}
			}
			//積み重ね終わり
			w.at(i) = -1;
			ans++;
		}
	}

	printf("%d\n", ans);

	return 0;
}