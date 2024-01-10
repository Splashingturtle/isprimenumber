#include<stdio.h>
int isPrimeNumber(m);
int main()
{
	int j = 0;
	for (j = 101; j <= 200; j++) {
		if (isPrimeNumber(j)) {
			printf("%d  ",j);
		}
	}
	
	

	return 0;
}
int isPrimeNumber(m) {
	int i;
	for (i = 2; i < m; i++) {
		if (m % i == 0) {
			return 0;
			break;
		}
		else {
			return 1;
		}
	}
}
