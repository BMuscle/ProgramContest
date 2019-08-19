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
	int N, i, j, k, tmp, alice = 0, bob = 0;
	bool turn = true;
	vector<int> a;
	scanf("%d", &N);
	rep(i, N) {
		scanf("%d", &tmp);
		a.push_back(tmp);
	}
	sort(a.rbegin(), a.rend());
	rep(i, N) {
		if (turn) {
			alice += a.at(i);
		}
		else {
			bob += a.at(i);
		}
		turn = !turn;
	}

	printf("%d", alice - bob);
	   	  
	return 0;
}