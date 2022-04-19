#include <stdio.h>
int main(){
	int n;
	do{
	printf("Nhap so: ");
	scanf("%d",&n);
	}while(n<=0);	
	int s=0;
	for(;n!=0;n/=10){	
		s=n%10;		
	}
	printf("so dau tien: %d",s);
}
