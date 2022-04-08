#include <stdio.h>
int main(){
	int n;
	printf("nhap so: ");
	scanf("%d",&n);
	int i=2;
	int f1=0;
	int f2=1;
	int f;
	while(f<n){
		f=f1+f2;
		f1=f2;
		f2=f;
		i++;
	}
	printf("so trong day fibonacci là : %d",f);
}


