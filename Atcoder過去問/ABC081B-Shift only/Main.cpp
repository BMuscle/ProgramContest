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
	int N, tmp, i, j, k, ans = 0;
	bool flag = false;
	vector<int> A;
	scanf("%d", &N);
	rep(i, N) {
		scanf("%d", &tmp);
		A.push_back(tmp);
	}
	while (1) {
		rep(i, N) {
			if ((A.at(i) & 1) == 1) {
				flag = true;//Šï”‚ª‚ ‚é‚È‚ç
				break;
			}
			else {
				A.at(i) /= 2;
			}
		}
		if (flag == false) {
			ans++;
		}
		else {
			break;
		}
	}
	printf("%d", ans);

	return 0;
}