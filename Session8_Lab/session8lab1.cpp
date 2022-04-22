#include <stdio.h>
#include "labSession8.h"
int main(){
	int a,b,c;
	printf("Nhap a:\n",a);
	scanf("%d",&a);
	printf("Nhap b:\n",b);
	scanf("%d",&b);
	printf("Nhap c:\n",c);
	scanf("%d",&c);
	
	if(a+b>c&&a+c>b&&b+c>a){
		int cvtg =tinhChuViTamGiac(a,b,c);
		int dttg=tinhDienTichTamGiac(a,b,c);
		printf("\nchu vi hinh tam giac = %d\n",cvtg);
		printf("\ndien tich hinh tam giac = %d\n",dttg);
	}else
	printf("\nday khong phai hinh tam giac\n");
	
	
	
	
	int x;
	printf("nhap x:",x);
	scanf("%d",&x);	
	int tong=tinhTongCacChuSo(x);
	printf("\ntong cac chu so cua %d la %d\n",x,tong);
	
	
	int ucln=uocChungLonNhat(a,b);
	printf("\nuoc chung lon nhat cua %d va %d la %d\n",a,b,ucln);
	
	int bcnn=boiChungNhoNhat(a,b);
	printf("\nboi chung nho nhat cua %d va %d la %d\n",a,b,bcnn);
}
