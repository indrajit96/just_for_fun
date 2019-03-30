#include<stdio.h>
// a rasied to b
int fast_pow(int a,int b) {
	int temp = 0;
	if(b == 1)
		return a;
	temp = fast_pow(a,b/2);
	if(b % 2 == 0)
		return (temp*temp);
	else
		return (a*temp*temp);
}

int main() {
	printf("%d",fast_pow(4,5));
	return 0;
}
