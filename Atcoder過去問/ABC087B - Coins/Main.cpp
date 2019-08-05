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
	int A, B, C, X,cnt = 0,i,j,k;

	scanf("%d %d %d %d", &A, &B, &C, &X);
	rep(i, A+1) {
		rep(j, B + 1) {
			rep(k, C + 1) {
				int total = 500 * i + 100 * j + 50 * k;
				if (X == total) {
					cnt++;
				}
			}
		}
	}

	printf("%d", cnt);

	return 0;
}