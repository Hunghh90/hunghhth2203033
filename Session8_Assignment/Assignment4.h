#include <stdio.h>
int BCNN(int a, int b){
		for(int i=1;i<a*b;i++){
			if(i%a==0 && i%b==0){
				return i;
		}
	}
}

int BCNNS(int *m,int n){
	int BCNNS=m[0];
	for(int i=1;i<n;i++){
		BCNNS=BCNN(BCNNS,m[i]);
	}
	return BCNNS;
}
