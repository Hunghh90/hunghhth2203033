#include <stdio.h>
int main(){
	int n;
	printf("nhap so: ");
	scanf("%d",&n);
	int i=1;
	int b=0;
	while(i<n){
		if(n%i==0)	
		b+=i;
		i++;
	}
	if(b==n){
		printf("%d la so hoan hao",n);
	}else{
		printf("%d khong phai so hoan hao",n);
	}
	
}
