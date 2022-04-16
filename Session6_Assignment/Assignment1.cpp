#include <stdio.h>
int main(){
	int n,gtxn;
	do {
	printf("nhap n: ");
	scanf("%d",&n);
	}while(n<=0);
	int m[n];
	for(int i=0;i<n;i++){
		scanf("%d",&m[i]);
	}
	int x;
	printf("nhap x: ");
	scanf("%d",&x);
	gtxn=0;
	for(int i=0;i<n;i++){
		int a=0;

		if(m[i]<x){
			a=x-m[i];
			
		}else{
			a=m[i]-x;
		}
		if(a>gtxn)
			gtxn=a;
	}
	printf("gtxn = %d",gtxn);
}
