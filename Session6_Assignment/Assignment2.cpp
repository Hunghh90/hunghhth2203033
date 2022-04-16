#include <stdio.h>
int main(){
	int n,gtgn;
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
	gtgn=x;
	for(int i=0;i<n;i++){
		int a=0;

		if(m[i]<x){
			a=x-m[i];
			
		}else{
			a=m[i]-x;
		}
		if(a<gtgn)
			gtgn=a;
	}
	printf("gtgn = %d",gtgn);
}
