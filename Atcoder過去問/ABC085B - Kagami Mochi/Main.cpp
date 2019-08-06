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
	int N, tmp, i, j, k, ans = 1;
	vector<int> d;
	
	scanf("%d", &N);
	rep(i, N) {
		scanf("%d", &tmp);
		d.push_back(tmp);
	}
	sort(d.begin(), d.end());
	tmp = d.at(0);

	for(int i = 1; i < N; i++){
		if (tmp != d.at(i)) {
			ans++;
			tmp = d.at(i);
		}
	}
	printf("%d", ans);

	return 0;
}