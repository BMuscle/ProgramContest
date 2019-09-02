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
	string a, b;
	int i, j, k, ans = 0;
	cin >> a;
	cin >> b;

	rep(i, 3) {
		if (a[i] == b[i]) {
			ans++;
		}
	}
	cout << ans;

	return 0;
}