#include <stdio.h>
int main(){
	int x;
	printf("moi ban nhap so nguyen: ");
	scanf("%d", &x);
	if (x % 2 == 0){
		printf("%d la so chan", x);
	}
	else{
		printf("%d la so le", x);
	}
	return 0;
}