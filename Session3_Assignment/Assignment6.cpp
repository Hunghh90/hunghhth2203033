#include <stdio.h>
int main(){
	int n;
	printf("nhap so: ");
	scanf("%d",&n);
	int f1=1;
	int f2=1;
	int f=f1+f2;
	while(f<=n){
		f=f1+f2;
		f1=f2;
		f2=f;
	}
	printf("%d",f1);
}


