#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>        

int main() {
	int m, n;int Count = 0;int Sum = 0;
	scanf("%d %d", &m, &n);
	for (int i = m;i <= n;i++) {
		int flap = 1;
		for (int a = 2;a < i;a++) {
			if (i % a == 0) {
				flap = 0;
				break;
			}


		}	
		if (flap == 1) {
			printf("%d\n", i);
			Count++;
			Sum += i;
		}
		
	}printf("Count=%d\n", Count);
	printf("Sum=%d\n", Sum);
	return 0;
}
