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

ll N, i, j, k, tmp, h, w, t;

int main(void) {
	vector<ll> v;
	bool f = true,ans = true;
	scanf("%lld", &N);
	scanf("%lld", &tmp);
	for (ll i = 1; i < N; i++) {
		scanf("%lld", &h);
		if (h < tmp) {
			if (tmp - h >= 2) {
				ans = false;
				break;
			}
			else if (f == false) {
				ans = false;
				break;
			}
			else {
				f = false;
			}
		}
		else {
			f = true;
		}
		tmp = h;
	}
	

	
	
	if (ans) {
		printf("Yes");
	}
	else {
		printf("No");
	}



	return 0;
}