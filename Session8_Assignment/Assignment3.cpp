#include <stdio.h>
#include "Assignment3.h"
int main(){
	int n;
	do{
	printf("Nhap n: ");
	scanf("%d",&n);
	}while(n<=0);
	int h[n];
	for(int i=0;i<n;i++){	
		do{
		
	printf("Nhap mang m[%d]: ",i);
	scanf("%d",&h[i]);
		}while (h[i]<=0);
	}
	int ucln = UCLNS(h,n);
	printf("%d",ucln);
}
