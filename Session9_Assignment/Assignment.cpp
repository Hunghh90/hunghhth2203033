#include <stdio.h>
#include <string.h>
void menu(){
	printf("TINH TOAN\n");
	printf("================\n");
	printf("1. Nhap so luong sinh vien\n");
	printf("2. Nhap danh sach ten sinh vien\n");
	printf("3. Sap xep ten sinh vien\n");
	printf("4. In danh sach ten sinh vien\n");
	printf("5. Thoat\n");
	printf("================\n");
	printf("Chon: ");
}
void sapXep(char s[][50],int sl){
		for ( int j = 0 ; j <sl- 1 ; j ++) {
		for ( int k = 0 ; k <sl-j-1 ; k ++) {
			if(strcmp (s[k],s[k+1])>0){
				char tmp [ 20 ];
				strcpy (tmp, s [k]);
				strcpy (s [k], s [k + 1 ]);
				strcpy (s [k + 1 ], tmp);
			}
		}
	}
}

int main(){
	int n,sl;
	char s[sl][50];
	bool f=false;
	do{
		menu();
		scanf("%d",&n);
		switch(n){
			case 1:{
				printf("Nhap so luong sinh vien: ");
				scanf("%d",&sl);
				f=true;
				break;
			}
			case 2:{
				if(!f){
					printf("Nhap so luong sinh vien truoc\n");
					break;
				}

				for(int i=0;i<sl;i++){
				scanf("%s",s[i]);
			
				}			
				break;
			}
			case 3:{
				sapXep(s,sl);
				break;
			}
			case 4:{
				for(int i=0;i<sl;i++){
					printf("%s\n",s[i]);
				
				}
					break;
			}
		}
		
	}while(n!=5);
}
