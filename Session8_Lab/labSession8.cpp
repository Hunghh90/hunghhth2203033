#include <stdio.h>
int tinhTongCacChuSo (int n){
	int m=0;
	while(n!=0){
		m+=n%10;
		n/=10;
	}
}
int tinhChuViTamGiac(int a,int b,int c){
			int cv=0;
		cv=a+b+c;		
	return cv;
}
int tinhDienTichTamGiac(int a,int b,int c){
	int dt=0;
		dt=sqrt(cv*(cv-a)*(cv-b)*(cv-c));	
	return dt;
}
int uocChungLonNhat(int a,int b){
	for(int i=0;i<=a||i<=b;i++){
		int ucln=0;
		int max=0;
		if(a%i==0&&b%i==0){
			ucln=i;
			i>max;
			max=i;
		}
	}
	return max;
}
int uocChungLonNhat(int a,int b){
	for(int i=0;i<=a*b;i++){
		int bcnn=0;
		if(i%a==0&&i%b==0){
			bcnn=i;
			return bcnn;
		}
	}
}
