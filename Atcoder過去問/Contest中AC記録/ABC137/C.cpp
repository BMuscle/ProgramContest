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

ll N, i, j, k, h, w, t;

int main(void) {
	bool flag = false;

	vector<string>s;
	string tmp;
	ll t, cnt = 0, sum = 0;

	scanf("%lld", &N);

	for (i = 0; i < N; i++) {
		cin >> tmp;
		sort(tmp.begin(), tmp.end());
		s.push_back(tmp);
	}

	sort(s.begin(), s.end());
	tmp = s.at(0);
	k = 1;

	for (i = 1; i < N; i++) {
		if (tmp == s.at(i)) {//‰ð“šŒó•â‚Æˆê’v
			cnt += k;//‚P‰ÁŽZ
			k++;
		}
		else {
			tmp = s.at(i);//•ÏX
			k = 1;
		}
	}
	printf("%lld", cnt);

	return 0;
}