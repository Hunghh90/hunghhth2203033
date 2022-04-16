#include <stdio.h>
int main(){
	int n,min,max;
	do {
	printf("nhap n: ");
	scanf("%d",&n);
	}while(n<=0);
	int m[n];
	for(int i=0;i<n;i++){
		scanf("%d",&m[i]);
	}
		min=0;
		max=0;
	for(int i=0;i<n;i++){	
		if(m[i]<min)
			min=m[i];
		if(m[i]>max)
			max=m[i];		
	}printf("doan [ab] chua tat ca gia tri trong mang la %d-%d",min,max);
}
