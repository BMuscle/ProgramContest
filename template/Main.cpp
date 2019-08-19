#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
#include <math.h>
#include <array>;
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
	int N, Q;
	int a, b;
	typedef struct ab {
		int cnt = 0;
		int index;
		vector<struct ab> vec;
	}abc;

	abc root;
	abc* current;
	abc* tp;

	vector<array<int, 2>> AB;
	array <int, 2> t;

	scanf("%d %d", &N, &Q);
	rep(i, N) {
		scanf("%d %d", t[0], t[1]);
		AB.push_back(t);
	}

	sort(AB.begin(), AB.end());
	root.index = 1;
	current = &root;
	i = 1;
	while( i < N) {
		if (AB.at(i)[0] == current->index) {
			struct ab t;
			t.index = AB.at(i)[1];
			current->vec.push_back(t);
		}
		else {
			i++;
		}
	}

	

	return 0;
}