#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	int N, tmp, i;
	bool flag = false;
	vector<int> A;
	int max = -100, max2 = -200;

	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &tmp);
		A.push_back(tmp);
		if (max == tmp) {//�ꏏ�Ȃ�
			max2 = tmp;
			flag = true;
		}
		else if (max < tmp) {//�ł����Ȃ�
			flag = false;
			max2 = max;
			max = tmp;
		}
		else if (max2 < tmp) {//2�Ԗڂ��ł����Ȃ�
			flag = false;
			max2 = tmp;
		}
	}
	if (flag) {//�t���O�����Ă�Ȃ�ő�l2����̂őS������
		for (i = 0; i < N; i++) {
			printf("%d\n", max);
		}
	}
	else {
		for (i = 0; i < N; i++) {
			if (max == A.at(i)) {
				printf("%d\n", max2);
			}
			else {
				printf("%d\n", max);
			}
		}
	}




	return 0;
}