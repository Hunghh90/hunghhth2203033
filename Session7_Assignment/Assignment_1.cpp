#include <stdio.h>
#include <string.h>
int main(){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	char s[n][20];

	
	for(int i=0;i<n;i++){
		printf("Nhap chuoi:");
		scanf("%s",s[i]);
	}
	for(int j=0;j<n-1;j++){
		for(int k=0;k<n-j-1;k++){
			if(strcmp(s[k],s[k+1])>0){
				char tmp[20];
				strcpy(tmp,s[k]);
				strcpy(s[k],s[k+1]);
				strcpy(s[k+1],tmp);
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%s\n",s[i]);
	}
}
