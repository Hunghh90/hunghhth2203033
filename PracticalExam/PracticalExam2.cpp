#include <stdio.h>
#include "reverseArray.h"
int main(){
	int x;
	do{
		printf("Nhap x:");
		scanf("%d",&x);
	}while(x<=0);
	int arr[x];
	nhapMang (arr,x);
	inNguoc (arr,x);	
}
