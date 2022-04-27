#include <stdio.h>
int main(){
	int n;
	float s=0;
	printf("Nhap n:");
	scanf("%d",&n);
	
	if(n<=0){
		printf("So khong hop le");
	}else{
		for(int i=1;i<=n;i++){
			s+=(float)1/i;
		}
			printf("tong = %f\n",s);
	}

}
