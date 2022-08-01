#include <stdio.h>
using namespace std;
int main () {
	printf(" nhap n: ");
	int n;
	scanf("%d", &n);
	int t = 1;
	int S = 0;
	while ( t<= n) {
		if ( n%t == 0) {
		printf (" t = %d \n", t); 
		S+=t; }
		t++;
	}
	printf ( "tong cac uoc :  %d", S);
	return 0;
}
