#include <stdio.h>
int main(){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	int m[n];
	for(int i=0;i<n;i++){
		scanf("%d",&m[i]);
	}
	for(int i=0;i<n;i++){
		if (m[i]%2!=0){		
		for(int j=0;j<n;j++){
			if(m[j]%2!=0){
			
			if (m[i] < m[j])
	        {
	           int temp = m[i];
	           m[i] = m[j];
	           m[j] = temp;
	       }
	        }
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d    ",m[i]);
	}
}
