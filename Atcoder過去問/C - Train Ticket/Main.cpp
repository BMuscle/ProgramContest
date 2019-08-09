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
	int A[4], tmp, i, j, k;

	scanf("%d", &tmp);

	rep(i, 4) {
		A[i] = tmp % 10; tmp /= 10;
	}
	
	if (A[3] + A[2] + A[1] + A[0] == 7) {
		printf("%d+%d+%d+%d=7", A[3], A[2], A[1], A[0]);
	}
	else if (A[3] - A[2] + A[1] + A[0] == 7) {
		printf("%d-%d+%d+%d=7", A[3], A[2], A[1], A[0]);
	}
	else if (A[3] - A[2] - A[1] + A[0] == 7) {
		printf("%d-%d-%d+%d=7", A[3], A[2], A[1], A[0]);
	}
	else if (A[3] - A[2] - A[1] - A[0] == 7) {
		printf("%d-%d-%d-%d=7", A[3], A[2], A[1], A[0]);
	}
	else if (A[3] + A[2] - A[1] + A[0] == 7) {
		printf("%d+%d-%d+%d=7", A[3], A[2], A[1], A[0]);
	}
	else if (A[3] + A[2] + A[1] - A[0] == 7) {
		printf("%d+%d+%d-%d=7", A[3], A[2], A[1], A[0]);
	}
	else if (A[3] + A[2] - A[1] - A[0] == 7) {
		printf("%d+%d-%d-%d=7", A[3], A[2], A[1], A[0]);
	}
	else if (A[3] - A[2] + A[1] - A[0] == 7) {
		printf("%d-%d+%d-%d=7", A[3], A[2], A[1], A[0]);
	}


	return 0;
}