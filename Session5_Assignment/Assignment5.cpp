#include <stdio.h>
int main(){
	
	int n,i;
	printf("Nhap so: ");
	scanf("%d",&n);
	int m[n];
	for(i=0;i<n;i++){
	scanf("%d",&m[i]);
	}
	int min=m[i];	
	for(i=0;i<n;i++){
		if(m[i]>=0&&m[i]<min){			
			min=m[i];
		}
	}
	printf("so duong nho nhat : %d",min);
}
