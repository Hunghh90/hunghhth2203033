#include <stdio.h>
#include "reverseArray.h"
int main(){
	int x;
	printf("Nhap x:");
	scanf("%d",&x);
	int arr[x];
	nhapMang (arr,x);
	inNguoc (arr,x);	
}
