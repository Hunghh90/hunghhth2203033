#include <stdio.h>
#include "Assignment1.h"
int main(){
	int x,y;
	printf("Nhap x:");
	scanf("%d",&x);
	printf("Nhap y:");
	scanf("%d",&y);
	int tich=timTich(x,y);
	printf("%d",tich);
}
