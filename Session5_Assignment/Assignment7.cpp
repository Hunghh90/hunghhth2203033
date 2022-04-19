#include <stdio.h>
int main(){
	
	int n,i,s;
	printf("Nhap so: ");
	scanf("%d",&n);
	int m[n];
	for(i=0;i<n;i++){
	scanf("%d",&m[i]);
	}
	int sm=0;
	s=0;
	for(i=0;i<n;i++){		
		if(m[i]>=0){		
		s+=m[i];
		if(s>sm)
		sm=s;
	
		
	}
		else
			s=0;		
	}
	printf("tong chuoi so duong dai nhat la %d",sm);
}
