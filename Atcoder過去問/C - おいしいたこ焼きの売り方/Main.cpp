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
	int T, N, M, i, j, k, tmp;
	bool flag = true;
	vector<int> A, B;
	scanf("%d", &T);
	scanf("%d", &N);
	rep(i, N) {
		scanf("%d", &tmp);
		A.push_back(tmp);
	}

	scanf("%d", &M);
	rep(i, M) {
		scanf("%d", &tmp);
		B.push_back(tmp);
	}

	if (M > N) {
		printf("no\n");
		return 0;
	}
	j = 0;
	for (i = 0; i < M; i++) {
		while(j < N){
			if (B.at(i) - A.at(j) <= T && B.at(i) - A.at(j) >= 0) {
				j++;
				flag = true;
				break;
			}
			else {
				flag = false;
			}
			j++;
			
		}
		if (flag == false) {
			break;
		}
	}
	if (flag) {
		printf("yes\n");
	}
	else {
		printf("no\n");
	}


	return 0;
}