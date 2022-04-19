#include <stdio.h>
int main(){
	int n;
	do{
	printf("Nhap so: ");
	scanf("%d",&n);
	}while(n<=0);
	int d;	
	int s=0;
	for(;n!=0;n/=10){	
		s=n%10;
		if(s%2==0){		
		d++;
		printf("co ca so chan va le");
		break;
			}
	}
	if(d==0)
	printf("chi bao gom so le");
}
