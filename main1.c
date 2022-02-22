#include <stdio.h>
#include <math.h>

int is_armstrong(int x) {
	int res = x, digits[100] = {0}, i = 0;
	int sum = 0, j = 0;

	while(res) {
		digits[i++] = res % 10;
		res /= 10;
	}
	for (j = 0; j < i; j++)
		sum += pow(digits[j], i);

	return sum == x;
}

int main() {
	int i;
	for(i = 0; i < 500; i++)
		if (is_armstrong(i))
			printf("%d\n", i);
	//printf("153? %d\n", is_armstrong(153));
	//printf("152? %d\n", is_armstrong(152));
	return 0;
}
