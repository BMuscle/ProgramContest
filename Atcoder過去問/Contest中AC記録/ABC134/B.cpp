#include <stdio.h>
#include <math.h>
using namespace std;

int main(void) {
	int N, D;
	scanf("%d%d", &N, &D);
	D = D * 2 + 1;
	float ans = (float)N / D;
	printf("%d", (int)ceil(ans));

	return 0;
}