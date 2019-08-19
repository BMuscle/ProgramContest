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
	constexpr int N = 2;
	int T, i, j, k, cnt[N] = {0,0};
	string s;
	string ac[2] = { "tokyo","kyoto" };

	vector<int>ans;

	scanf("%d", &T);
	rep(i, T) {
		ans.push_back(0);
		cin >> s;
		cnt[0] = 0;
		cnt[1] = 0;
		for (j = 0; j < s.length(); j++) {
			rep(k, N) {
				if (s[j] == ac[k][cnt[k]]) {
					cnt[k]++;
					if (cnt[k] == ac[k].length()) {
						cnt[0] = 0;
						cnt[1] = 0;
						ans.at(i)++;
					}
				}
				else {
					cnt[k] = 0;
					if (s[j] == ac[k][cnt[k]]) {
						cnt[k]++;
					}
				}
			
			}
		}
	}

	rep(i, T) {
		printf("%d\n", ans.at(i));
	}


	return 0;
}