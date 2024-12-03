#include<stdio.h>
#include<stdlib.h>
void deleteElement(int **pArr,int *n,int position);
int main(){
	int n; 
	printf("Nhap do dai cua mang: ");
	scanf("%d",&n);
	int *pArr = NULL;
	pArr = (int *)malloc(n * sizeof(int));
	if (pArr == NULL) {
        printf("Khong the cap phat bo nho.\n");
        return 1;
    }
    for(int i=0;i<n;i++){
    	printf("Nhap phan tu thu %d: ",i);
    	scanf("%d", pArr + i);
	}
	int index;
    printf("Nhap vi tri muon xoa: ");
    scanf("%d",&index);
	deleteElement(&pArr,&n,index);
	for(int i=0;i<n;i++){
		printf("%d ", *(pArr + i));
	}
}
void deleteElement(int **pArr,int *n,int position){
	if (position < 0 || position >= *n) {
        printf("Vi tri xoa khong hop le.\n");
        return;
    }
    for (int i = position; i < *n - 1; i++) {
        (*pArr)[i] = (*pArr)[i + 1];
    }
    *pArr = (int *)realloc(*pArr, (*n - 1) * sizeof(int));
    (*n)--;
}

