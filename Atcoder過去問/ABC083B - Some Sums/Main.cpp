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
	int N, A, B, sum = 0, ans = 0,tmp;

	scanf("%d %d %d", &N, &A, &B);
	
	for (int i = 1; i <= N; i++) {
		sum = 0;
		tmp = i;
		while (tmp != 0) {
			sum += tmp % 10;
			tmp /= 10;
		}
		if (sum >= A && sum <= B) {
			ans += i;
		}
	}
	printf("%d", ans);


	return 0;
}