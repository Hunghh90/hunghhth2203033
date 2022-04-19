#include <stdio.h>
int main(){
	
	int n;
	printf("Nhap so: ");
	scanf("%d",&n);
	int m[n];
	for(int i=0;i<n;i++){
	scanf("%d",&m[i]);
	}
	int x;
	printf("Nhap so x: ");
	scanf("%d",&x);
	bool f=true;
	for(int i=0;i<n;i++){
		if(m[i]==x){		
		f=false;
		printf("so x co trong mang");
		break;
	}
	}
	if(f)
	printf("x khong nam trong mang");
}
