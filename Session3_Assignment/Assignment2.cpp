#include <stdio.h>
int main(){
	int n;
	printf("nhap so: ");
	scanf("%d",&n);
	int i=0;
	int max=0;
	while(i<n){
		if((i%2==0)&&(i%3==0))
		max=i;
		i++;
	}
	printf("so lon nhat chia het cho 2 va 3 la: %d",max);
}
