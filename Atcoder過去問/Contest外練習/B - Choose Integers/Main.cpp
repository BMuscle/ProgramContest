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
	int A, B, C, i, j, k, cnt, ans, limit;
	bool flag = false;
	scanf("%d %d %d", &A, &B, &C);

	limit = A * B;
	for (i = A; i <= limit; i += A) {
		if (i % B == C) {
			flag = true;
			break;
		}
	}
	if (flag) {
		printf("YES");
	}
	else {
		printf("NO");
	}




	return 0;
}