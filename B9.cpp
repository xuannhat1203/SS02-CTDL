#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	int *pArr = NULL;
	pArr = (int *)malloc(n * sizeof(int));
	if(pArr == NULL){
		printf("Khong the cap phat bo nho");
		return 1;
	}
	for(int i = 0 ; i < n; i++){
		printf("Nhap so thu %d trong mang: ",i);
		scanf("%d", pArr + i);
	}
	int max = 0;
	int count = 0;
	for(int i = 0 ; i< n ;i++){
		int check = 0;
		for(int j = i+ 1; j< n; j++){
			if(*(pArr + i) == *(pArr+j)){
				check++;
			}
		}
		if(check > count){
			count = check;
			max = *(pArr + i);
		}
	}
	printf("%d",max);
}

