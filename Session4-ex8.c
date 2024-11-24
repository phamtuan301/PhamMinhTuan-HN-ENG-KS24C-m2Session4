#include<stdio.h>
int main(){
	float a, b, c;
	printf("moi ban nhap canh a: ");
	scanf("%f", &a);
	printf("moi ban nhap canh b: ");
	scanf("%f", &b);
	printf("moi ban nhap canh c: ");
	scanf("%f", &c);
	if (a + b > c && a + c >b && b + c > a){
		printf("%f %f %f la ba canh cua tam giac", a, b, c);
	}
	else{
		printf("%f %f %f khong phai ba canh cua tam giac", a, b, c);
	}
	return 0;
}