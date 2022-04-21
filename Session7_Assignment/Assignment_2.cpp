#include <stdio.h>
#include <string.h>
int main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	char arrs[n][30];
	for(int i=0;i<n;i++){
		scanf("%s",arrs[i]);
	}
	char c[30];
	printf("nhap chuoi:");
	scanf("%s",c);
	bool f=true;
	for(int i=0;i<n;i++){
		if(strcmp(arrs[i],c)==0){
			f=false;
			break;
		}
	}
	if(f){
		printf("chuoi khong co trong mang");
	}else{
		printf("chuoi co trong mang");
	}
}
