//输出N以内孪生素数  2026.10.17
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main() {
	int N;
	int found = 1;
	int p;
	scanf_s("%d", &N);
	for (p = 2;p <= N - 2;p++) {
		int flap = 1;
		{
			for (int i = 2;i < p;i++) {
				if (p % i == 0) {
					flap = 0;



				}break;
			}if (flap == 0)continue;
		}for (int a = 2;a < p + 2;a++) {
			if ((p + 2) % a == 0) {
				flap = 0;
				break;
			}
		}if (flap == 0)continue;
		printf("(%d,%d)\n", p, p + 2);   found = 0;
	}
if (found==0)printf("None");
		return 0;

}
