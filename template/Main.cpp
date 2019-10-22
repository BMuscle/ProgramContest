#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
#include <math.h>
#include <array>
#include <vector>
#include <queue>
#include <stack>
#include <numeric>
#include <list>
#include <deque>
#include <map>
#include <set>
#include <cstdlib>

using namespace std;

typedef long long LL;
typedef pair<int, int>PII;

#define FOR(i,a,b) for(int i = (a); i < (b); ++i)
#define REP(i,n) FOR(i,0,n)
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), rend()
#define PB pushback
#define SORT(c) sort((c).begin(),(c).end())

const LL INF = 1LL << 60;

//priority_queue<int> p;




//scanf("%d",&N);

//printf("%d", ans);

//cout <<  << endl;

/*------------------------------------------
	�֐����Fgcd
	�@�@�\�Fa/b �̍ő���񐔂����߂�
	���@���Fa b
	�߂�l�FT
-------------------------------------------*/
template<class T> inline T gcd(T a, T b) {
	T candidate = a;
	while (b % a != 0) {
		candidate = b % a;
		b = a;
		a = candidate;
	}
	return candidate;
}

LL i, j, k, tmp, ans, cnt, N, M, A, B;
bool flag = true;

/*------------------------------------------
	�֐����FEratosthenes
	�@�@�\�F�G���g�X�e�l�X��⿁@�z��ɑf�����i�[����
	���@���Fvector<bool> true�͑f�� false�͔�f�����i�[�����
			N 1~N�܂ł͈̔͂Ŕ��肷��
	�߂�l�Fbool�@vector�̃T�C�Y�I�[�o�[��false
-------------------------------------------*/
template<class T> inline bool Eratosthenes(vector<bool>& v, T N) {
	if (N + 1 > v.size()) {//�T�C�Y�`�F�b�N
		v.resize(N + 1, true);
	}
	else {
		return false;
	}
	v.at(0) = false;//�f�����珜�O
	v.at(1) = false;

	for (T i = 2; i <= sqrt(N); i++) {
		if (v.at(i)) {//i���f���Ȃ�
			for (T j = 2; i * j <= N; j++) {//j = i�̔{�� 
				v.at(i * j) = false;//�f������O��
			}
		}
	}
	return true;
}



int main(void) {
	vector<LL> v;
	scanf("%lld %lld", &A, &B);
	if (A < B) {
		LL work = B;
		B = A;
		A = work;
	}
	for (LL i = 1; i < A / 2 +1; i++) {
		if (A % i == 0 && B % i == 0) {
			v.push_back(i);
		}
	}
	
	vector<bool> b;

	if (v.size() >= 2) {
		Eratosthenes(b, v.at(v.size() - 1));

		for (LL i = 0; i < v.size(); i++) {
			if (b.at(v.at(i)) == true) {
				ans++;
			}
		}
	}
	printf("%lld", ans + 1);

	
	return 0;
}