#include <stdio.h>
using namespace std;
int main () {
int n;
do {

	printf(" nhap n : ");	
	scanf("%d", &n);
	if ( n <=0) {
		printf(" n la nguyen duong , hay nhap lai n : ");	
	}
	 } while ( n <=0);
	int max = 0;
	int d = n;
	int k = n;
do {
	d = n%10;
	if ( max < d) {
		max = d;
	}
} while ( n/=10);
		printf ( " chu so lon nhat cua %d la : %d" , k , max);
	
	return 0;
}
