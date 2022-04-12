#include <stdio.h>

int main(){
	int a,b;
	do{
	printf("Nhap so a: ");
	scanf("%d",&a);
	printf("Nhap so b: ");
	scanf("%d",&b);
	}while(a<=0&&b<=0||a>b);			
	for(int i=a;i<=b;i++){
	int c=0;
		for(int j=1;j<=i;j++)
		if(i%j==0) 		
		c++;
		if(c==2) 		
		printf("%d la so nguyen to\n",i);
	}
}
