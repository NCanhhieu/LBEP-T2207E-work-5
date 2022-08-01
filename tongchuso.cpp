#include <stdio.h>
using namespace std;
int main () {
	printf(" nhap n : ");
	int n;
	scanf("%d", &n);
	int k = 0;
	int d = n;
	if ( n < 10) {
		k = n;
		printf ( " tong chu so cua %d la : %d " , d , k);
	} else {
		while ( n>0) {
			k  += (n%10);
			n/=10;
		}
		printf ( " tong chu so cua %d la : %d" , d , k);
	}
	return 0;
}
