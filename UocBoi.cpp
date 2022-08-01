#include <stdio.h>
using namespace std;
int main () {
	printf(" nhap a: ");
	int a;
	scanf("%d", &a);
	printf(" nhap b: ");
	int b;
	scanf("%d", &b);
	int t = 1;
	int h = 1;
	int UCLN = 0;
	int BCNN;
	
	while ( t <= a && t <= b) {
		if ( a%t == 0 && b%t == 0) {
		     UCLN = t;
		 }
		t++;
	}
	BCNN = (a*b)/UCLN;
	printf (" Uoc chung lon nhat la = %d \n", UCLN);
	printf (" Boi chung nho nhat la = %d \n", BCNN);
	return 0;
}
