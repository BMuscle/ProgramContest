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
	string A;
	cin >> A;
	if (A == "a") {
		printf("-1");
	}
	else if(A.length() == 1){
		A[0]--;
		printf("%s", A.c_str());
	}
	else {
		printf("%c", A[0]);
	}
	return 0;
}