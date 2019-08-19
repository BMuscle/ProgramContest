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
	int N, i, j, k, tmp, r = 0, sum = 0, ans = 0;
	vector<int> A[2];

	scanf("%d", &N);
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%d", &tmp);
			A[i].push_back(tmp);
		}
	}

	for (int i = 0; i < N; i++) {
		r = 0;
		sum = 0;
		for (int j = 0; j < N; j++) {
			if (i == j) {
				sum += A[r].at(j);
				r = 1;
				sum += A[r].at(j);
			}
			else {
				sum += A[r].at(j);
			}
		}
		ans = max(ans, sum);
	}
	printf("%d", ans);

	return 0;
}