#include <stdio.h>
int main(){
	int x;
	printf("moi ban nhap so nguyen: ");
	scanf("%d", &x);
	if (x % 3 == 0){
		printf("%d chia het cho 3\n");
	}
	if (x % 5 == 0){
		printf("%d chia het cho 5\n");
	}
	if (x % 15 == 0){
		printf("%d chia het cho ca 3 va 5");
	}
	return 0;
}