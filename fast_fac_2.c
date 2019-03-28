#include <stdio.h>

int fast_fac(int n) {
	int odd = 1;
	if(n%2 == 1) {
		odd = n;
		n = n-1;
	}
	int fac_value = n;
	int up_val = n;
	while(n > 2) {
		up_val = up_val + n - 2;
		fac_value = fac_value * up_val;
		n = n - 2;
	}
	return fac_value*odd;
}
int main() {
	printf("%d",fast_fac(5));
	return 0;
}
