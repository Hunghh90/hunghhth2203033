#include <stdio.h>
#include "Assignment2.h"
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	int h[n];
	for(int i=0;i<n;i++){	
	printf("Nhap mang: ");
	scanf("%d",&h[i]);
	}
	int snt = timSNT(h,n);
	printf("%d",snt);
}
