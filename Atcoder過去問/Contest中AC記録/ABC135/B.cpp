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
	int N, i, j, k, tmp, cnt = 0, ans = 0;
	bool flag1 = false, flag2 = false, flag3 = false;
	vector<int> p;
	scanf("%d", &N);
	rep(i, N) {
		scanf("%d", &tmp);
		p.push_back(tmp);
	}

	rep(i, N) {
		if (i + 1 != p.at(i)) {//ˆá‚¤‚Æ‚«
			if (!flag1) {//ƒtƒ‰ƒO‚¨‚‹
				flag1 = true;
			}
			else if (!flag2) {//‚¨‚‹
				flag2 = true;
			}
			else {//‚¾‚ß
				flag1 = false;
				flag2 = false;
				flag3 = true;
				break;
			}
		}
	}
	if (flag1 == true && flag2 == true || flag3 == false) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}


	return 0;
}