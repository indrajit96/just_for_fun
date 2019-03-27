#include<stdio.h>
long long int  gcd(long long int a, long long int b) {
	if( a == 0 )
		return b;
	return gcd (b%a , a);
}

long long int fast_ncr(long long int n, long long int r) {
	long long int p = 1 , k = 1;
	if ( n - r < r)
		r = n-r;
	if(r == 0)
		return 1;
	while(r) {
		p *=n;
		k *=r;
		long long int m = gcd(p,k);
		p /= m;
		k /= m;
		
		n--;
		r--;
	}
	return p;

}

int main() {
	long long int n = 60;
	long long int r = 5;

	printf("%lld",fast_ncr(n,r));
	return 0;

}
