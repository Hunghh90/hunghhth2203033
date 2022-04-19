#include <stdio.h>
int main(){
	
	int n;
	float tb;
	printf("Nhap so: ");
	scanf("%d",&n);
	int m[n];
	for(int i=0;i<n;i++){
	scanf("%d",&m[i]);
	}
	int c=0;
	int s;
		for(int i=0;i<n;i++){			
			if(m[i]%2!=0){
				if(m[i]==1){
					s++;							
				}				
				c++;
				s+=m[i];
				tb=(float)s/c;
			}
		}
		printf("Tb cong cac so le = %f",tb);
}
