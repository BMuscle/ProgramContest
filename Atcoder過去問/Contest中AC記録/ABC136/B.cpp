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

int i, j, k, tmp;

int main(void) {
	int N, cnt = 0, tmp = 10, ans = 0;
	scanf("%d", &N);
	bool f = true;


	for (i = 1; i <= N; i++) {
		if (i % tmp == 0) {
			f = !f;
			tmp *= 10;
			if (f) {
				cnt++;
			}
		}
		else if (f) {
			cnt++;
		}
	}
	printf("%d", cnt);



	return 0;
}