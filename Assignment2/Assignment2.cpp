#include <stdio.h>
#include <math.h>
int main(){
	
	int a,b;
	printf("nhap so ngay: ");
	scanf("%d",&a);
	printf("nhap so thang: ");
	scanf("%d",&b);
	
	if((a>=1)&&(a<=31)&&(b==1)){
		int ngaytrongnam;
		ngaytrongnam=a;
		printf("hom nay la ngay thu %d cua nam\n",a);
		int ngaytrongtuan;
		ngaytrongtuan=a%7;
		if(ngaytrongtuan==0){
			printf("hom nay la chu nhat");
		}else{
			printf("hom nay la thu %d",ngaytrongtuan+1);
		}
	}else{
		if((a>=1)&&(a<=28)&&(b==2)){
			int ngaytrongnam;
			ngaytrongnam=a+31;
			printf("hom nay la ngay thu %d cua nam\n",ngaytrongnam);
			int ngaytrongtuan;
			ngaytrongtuan=ngaytrongnam%7;
			if(ngaytrongtuan==0){
			printf("hom nay la chu nhat");
			}else{
				printf("hom nay la thu %d",ngaytrongtuan+1);
			}
		}else{
			if((a>=1)&&(a<=31)&&(b==3)){
				int ngaytrongnam;
				ngaytrongnam=a+31+28;
				printf("hom nay la ngay thu %d cua nam\n",ngaytrongnam);
				int ngaytrongtuan;
				ngaytrongtuan=ngaytrongnam%7;
				if(ngaytrongtuan==0){
				printf("hom nay la chu nhat");
				}else{
				printf("hom nay la thu %d",ngaytrongtuan+1);
				}
			}else{
				if((a>=1)&&(a<=30)&&(b==4)){
					int ngaytrongnam;
					ngaytrongnam=a+31+28+31;
					printf("hom nay la ngay thu %d cua nam\n",ngaytrongnam);
					int ngaytrongtuan;
					ngaytrongtuan=ngaytrongnam%7;
					if(ngaytrongtuan==0){
					printf("hom nay la chu nhat");
					}else{
					printf("hom nay la thu %d",ngaytrongtuan+1);
					}
				}else{
					if((a>=1)&&(a<=31)&&(b==5)){
						int ngaytrongnam;
						ngaytrongnam=a+31+28+31+30;
						printf("hom nay la ngay thu %d cua nam\n",ngaytrongnam);
						int ngaytrongtuan;
						ngaytrongtuan=ngaytrongnam%7;
						if(ngaytrongtuan==0){
						printf("hom nay la chu nhat");
						}else{
						printf("hom nay la thu %d",ngaytrongtuan+1);
						}
					}else{
						if((a>=1)&&(a<=30)&&(b==6)){
							int ngaytrongnam;
							ngaytrongnam=a+31+28+31+30+31;
							printf("hom nay la ngay thu %d cua nam\n",ngaytrongnam);
							int ngaytrongtuan;
							ngaytrongtuan=ngaytrongnam%7;
							if(ngaytrongtuan==0){
							printf("hom nay la chu nhat");
							}else{
							printf("hom nay la thu %d",ngaytrongtuan+1);
							}
						}else{
							if((a>=1)&&(a<=31)&&(b==7)){
								int ngaytrongnam;
								ngaytrongnam=a+31+28+31+30+31+30;
								printf("hom nay la ngay thu %d cua nam\n",ngaytrongnam);
								int ngaytrongtuan;
								ngaytrongtuan=ngaytrongnam%7;
								if(ngaytrongtuan==0){
								printf("hom nay la chu nhat");
								}else{
								printf("hom nay la thu %d",ngaytrongtuan+1);
								}
							}else{
								if((a>=1)&&(a<=31)&&(b==8)){
									int ngaytrongnam;
									ngaytrongnam=a+31+28+31+30+31+30+31;
									printf("hom nay la ngay thu %d cua nam\n",ngaytrongnam);
									int ngaytrongtuan;
									ngaytrongtuan=ngaytrongnam%7;
									if(ngaytrongtuan==0){
									printf("hom nay la chu nhat");
									}else{
									printf("hom nay la thu %d",ngaytrongtuan+1);
									}
								}else{
									if((a>=1)&&(a<=30)&&(b==9)){
										int ngaytrongnam;
										ngaytrongnam=a+31+28+31+30+31+30+31+31;
										printf("hom nay la ngay thu %d cua nam\n",ngaytrongnam);
										int ngaytrongtuan;
										ngaytrongtuan=ngaytrongnam%7;
										if(ngaytrongtuan==0){
										printf("hom nay la chu nhat");
										}else{
										printf("hom nay la thu %d",ngaytrongtuan+1);
										}
									}else{
										if((a>=1)&&(a<=31)&&(b==10)){
											int ngaytrongnam;
											ngaytrongnam=a+31+28+31+30+31+30+31+31+30;
											printf("hom nay la ngay thu %d cua nam\n",ngaytrongnam);
											int ngaytrongtuan;
											ngaytrongtuan=ngaytrongnam%7;
											if(ngaytrongtuan==0){
											printf("hom nay la chu nhat");
											}else{
											printf("hom nay la thu %d",ngaytrongtuan+1);
											}
										}else{
											if((a>=1)&&(a<=30)&&(b==11)){
												int ngaytrongnam;
												ngaytrongnam=a+31+28+31+30+31+30+31+31+30+31;
												printf("hom nay la ngay thu %d cua nam\n",ngaytrongnam);
												int ngaytrongtuan;
												ngaytrongtuan=ngaytrongnam%7;
												if(ngaytrongtuan==0){
												printf("hom nay la chu nhat");
												}else{
												printf("hom nay la thu %d",ngaytrongtuan+1);
												}
											}else{
												if((a>=1)&&(a<=31)&&(b==12)){
													int ngaytrongnam;
													ngaytrongnam=a+31+28+31+30+31+30+31+31+30+31+30;
													printf("hom nay la ngay thu %d cua nam\n",ngaytrongnam);
													int ngaytrongtuan;
													ngaytrongtuan=ngaytrongnam%7;
													if(ngaytrongtuan==0){
													printf("hom nay la chu nhat");
													}else{
													printf("hom nay la thu %d",ngaytrongtuan+1);
													}	
												}else{
													printf("nhap sai ngay thang, kiem tra lai");
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	
}
	
	
	

	
	

