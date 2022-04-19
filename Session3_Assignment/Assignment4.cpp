#include <stdio.h>
int main(){
	int n;
	printf("nhap so: ");
	scanf("%d",&n);
	int sdn=0;
	while(n>0){
		sdn=sdn*10+n%10;
		n/=10;
	}
	printf("so dao nguoc là : %d",sdn);
}
