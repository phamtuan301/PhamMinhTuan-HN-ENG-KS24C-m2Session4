#include <stdio.h>
int main(){
	int x;
	printf("moi ban nhap so nguyen: ");
	scanf("%d", &x);
	if (x > 0){
		printf("%d la so duong", x);
	}
	else if (x < 0){
		printf("%d la so am", x);
	}
	else{
		printf("%d khong phai so am hay so duong", x);
	}
	return 0;
}