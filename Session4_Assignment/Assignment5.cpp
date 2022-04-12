#include <stdio.h>
int main(){
	int n;
	do{
	printf("Nhap so: ");
	scanf("%d",&n);
	}while(n<=0);
	int max=0;	
	int s=0;
	for(;n!=0;n/=10){	
		s=n%10;
		if(s>max)
		max=s;		
	}
	printf("so lon nhat: %d",max);
}
