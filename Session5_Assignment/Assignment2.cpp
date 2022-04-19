#include <stdio.h>
int main(){
	
	int n,s,c,tb;
	printf("Nhap so: ");
	scanf("%d",&n);
	int m[n];
	for(int i=0;i<n;i++){
	scanf("%d",&m[i]);
	}

		c=0;
		for(int i=1;i<n;i+=2){			
			if(m[i]%2!=0){
				if(m[i]==1){
					s++;							
				}				
				c++;
				s+=m[i];
				tb=s/c;
			}
		}
		if(c==0)
		printf("khong co so le o vi tri chan");
		else
		printf("Tb cong cac so le = %d",tb);
}
