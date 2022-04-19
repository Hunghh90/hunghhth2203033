#include <stdio.h>
int main(){
	int a,b;
	do{
		printf("nhap so a: ");
		scanf("%d",&a);
		printf("nhap so b: ");
		scanf("%d",&b);
	}while (a==0||b==0);
	int max=0;
	for(int i=1;i<=a*b;i++){
		if(a%i==0&&b%i==0){
			i>max;
			max=i;
		}
			if(i%a==0&&i%b==0){
			printf("BCNN la %d\n",i);
			break;
		}
	}
	printf("UCLN la : %d\n",max);
}	


