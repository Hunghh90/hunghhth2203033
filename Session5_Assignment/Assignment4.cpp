#include <stdio.h>
int main(){
	
	int n,slcc;
	printf("Nhap so: ");
	scanf("%d",&n);
	int m[n];
	for(int i=0;i<n;i++){
	scanf("%d",&m[i]);
	}
	for(int i=0;i<n;i++){
		if(m[i]%2!=0)
		slcc=m[i];	
	}
	printf("slcc : %d",slcc);
}
