#include <stdio.h>
int timSNT(int arr[],int n){
	int m = arr[0];
	for(int i=0;i<n;i++){
		if(m<arr[i]){
			m = arr[i];
		}
	}
	for(int j=m+1;;j++){
		int c=0;
		for(int k=1;k<=j;k++){
			if(j%k==0){
				c++;				
			}		
		}
		if(c==2){
		return j;
		}
	}
}
	
