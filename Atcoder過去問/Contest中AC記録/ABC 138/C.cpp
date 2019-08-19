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
	int i, j, k, tmp;
	int N;
	double ans = 0;
	vector<double> u;
	scanf("%d", &N);
	rep(i, N) {
		scanf("%d", &tmp);
		u.push_back(tmp);
	}
	sort(u.begin(), u.end());
	rep(i, N - 1) {
		u.at(i + 1) = (double)(u.at(i) + u.at(i + 1)) / 2.0;
	}
	cout << u.at(N - 1);


	return 0;
}