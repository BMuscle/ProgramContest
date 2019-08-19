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
	double sum = 0;
	double ans;
	vector<int> A;

	scanf("%d", &N);
	rep(i, N) {
		scanf("%d", &tmp);
		sum += (double)1 / tmp;
	}
	cout << (double)1 / sum;


	return 0;
}