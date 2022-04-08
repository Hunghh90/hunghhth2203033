#include <stdio.h>
int main(){
	int n;
	printf("nhap so: ");
	scanf("%d",&n);
	int i=0;
	while(i<n){
		if(i%2==1)
		printf("so le nho hon la : %d\n",i);
		i++;
	}

}
