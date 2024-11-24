#include <stdio.h>
int main(){
	int x;
	scanf("%d", &x);
	if (x > 0){
		printf("%d la so duong", x);
	}
	if (x < 0){
		printf("%d la so am", x);
	}
	else{
		printf("%d khong phai so am hay so duong", x);
	}
	return 0;
}