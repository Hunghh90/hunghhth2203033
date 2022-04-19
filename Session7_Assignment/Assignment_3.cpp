#include <stdio.h>
#include <string.h>
int main(){
	int c=0;
	char s[30];
	printf("Nhap chuoi:");
	scanf("%s",s);
	for(int i=0;i<strlen(s);i++){
	if(s[i]==97||s[i]==101||s[i]==105||s[i]==111||s[i]==117||s[i]==121||s[i]==65||s[i]==69||s[i]==73||s[i]==79||s[i]==85||s[i]==89){	
			c++;
		}
	}
	printf("so lan xuat hien nguyen am trong chuoi la %d",c);
}
