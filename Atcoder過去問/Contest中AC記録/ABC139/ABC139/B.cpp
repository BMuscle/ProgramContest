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
	int i = 1, j, k, ans = 0;

	int cnt = 1, tmp;
	int A, B;


	scanf("%d %d", &A, &B);
	if (B == 1) {
		printf("0\n");
		return 0;
	}

	int a = A, b;
	while (1) {
		if (a >= B) {
			break;
		}
		a += A - 1;
		cnt++;
	}
	printf("%d", cnt);

	return 0;
}