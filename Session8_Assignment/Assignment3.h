#include <stdio.h>
int UCLN(int a, int b){
	if(a<b){
		for(int i=a;i>=1;i--){
			if(a%i==0 && b%i==0){
				return i;
			}
		}
	}else{
		for(int i=b;i>=1;i--){
			if(a%i==0 && b%i==0){
				return i;
			}
		}
	}
}
int UCLNS(int *m,int n){
	int UCLNS=m[0];
	for(int i=1;i<n;i++){
		UCLNS=UCLN(UCLNS,m[i]);
	}
	return UCLNS;
}
