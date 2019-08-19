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
	string S, T, sub, ans;
	int i, j, k, tmp, cnt = 0;
	bool flag = true, ansok = false;

	cin >> S;
	cin >> T;
	//Œã‚ë‚©‚ç‡”Ô‚É‘–¸
	for (i = S.length() - T.length(); i >= 0; i--) {
		sub = S.substr(i, T.length());//Ø‚è”²‚«
		flag = true;
		for (j = 0; j < T.length(); j++) {
			if (sub[j] != T[j] && sub[j] != '?') {//ˆê’v‚µ‚Ä‚¢‚È‚¢
				flag = false;
				break;
			}
		}
		if (flag) {//•¶š—ñT‚ª“ü‚é
			ansok = true;
			cnt = i;//cnt‚É•¶š—ñŠi”[‚·‚éˆÊ’u‚ğ‘Ş”ğ
			break;
		}
	}

	if (ansok) {//³‰ğ‚ ‚é
		//H‚Ì•”•ª‚Ía‚É‚µ‚Ä‘¼‚Í‚»‚Ì‚Ü‚ÜŒó•âˆÈ~‚Í•’Ê‚É
		for (i = 0; i < S.length(); i++) {
			if (i == cnt) {
				i += T.length() - 1;
				printf("%s", T.c_str());
			}
			else if (S[i] == '?') {
				printf("a");
			}
			else {
				printf("%c", S[i]);
			}
		}
	}
	else {//‚È‚¢
		printf("UNRESTORABLE\n");
	}




	return 0;
}