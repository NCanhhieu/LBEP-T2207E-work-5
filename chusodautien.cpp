#include <stdio.h>
using namespace std;
int main () {
int n;
do
  {
    printf("\nNhap vào so nguyên n lon hon 0: ");
    scanf("%d", &n);
    if(n <= 0)
    {
      printf("\n  n phai lon hon 0, vui lòng nhap lai !");
    }
  }while(n <= 0);
  
	int k = 0;
	int d = n;

  do
  {
     k = d % 10;
  }while(d /= 10);
  printf("\nChu so dau tien cua %d la: %d",n, k);
	return 0;
}
