#include<stdio.h>
#include<stdlib.h>
int main(){
	int n; 
	printf("nhap so luong phan tu cua mang: ");
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
	int k;
	printf("nhap so k: ");
	scanf("%d",&k);
	int count = 0;
	for(int i = 0 ; i < n; i++){
		for(int j=i+1;j<n;j++){
			if(*(pArr + i) + *(pArr + j) == k ){
				printf("%d %d",*(pArr + i),*(pArr + j));
				count = 1;
			}
		}
	}
	if(!count){
		printf("khong co cap so nao ");
	}
	free(pArr);
	return 0;
}

