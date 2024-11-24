#include <stdio.h>
int main(){
	int sothunhat;
	int sothuhai;
	int sothuba;
	printf("moi ban nhap so thu nhat: ");
	scanf("%d", &sothunhat);
	printf("moi ban nhap so thu hai: ");
	scanf("%d", &sothuhai);
	printf("moi ban nhap so thu ba: ");
	scanf("%d", &sothuba);
	if((sothuba > sothunhat && sothuba < sothuhai) || (sothuba < sothunhat && sothuba > sothuhai)){
		printf("so thu ba nam giua so thu nhat va so thu hai");
	}
	else{
		printf("so thu ba khong nam giua so thu nhat va so thu hai");
	}
	return 0;
}