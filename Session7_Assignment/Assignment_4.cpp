#include <stdio.h>
#include <string.h>
int main(){
	char s1[20],s2[20];
	printf("nhap chuoi 1:");
	scanf("%s",s1);
	printf("nhap chuoi 2:");
	scanf("%s",s2);
		char c[strlen(s1)];
	if(strlen(s1)>strlen(s2)){
		char tmp[20];
		strcpy(tmp,s1);
		strcpy(s1,s2);
		strcpy(s2,tmp);
	}
	bool f=true;
	for(int i=0;i<strlen(s2);i++){	
		c = strcat(s2[i],s2[i+1]);
		if(strcmp(c,s1)==0){
			f=false;
			break;
		}
	}
	if(f){
		printf("khong chuoi nao la tap con chuoi nao");
	}else{
		printf("chuoi %s la tap con cua chuoi %s",s1,s2);
	}
//	printf("%s\n",s1);
//	printf("%s\n",s2);
}
