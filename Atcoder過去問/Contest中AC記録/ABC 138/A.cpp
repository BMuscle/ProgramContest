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
	string s;
	int a, i, j, k, tmp;

	scanf("%d", &a);
	cin >> s;
	if (a >= 3200) {
		cout << s;
	}
	else {
		printf("red\n");
	}


	return 0;
}