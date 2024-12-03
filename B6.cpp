#include<stdio.h>
#include<stdlib.h>
void mergeArr(int **pArr,int *n,int **pArr2,int *m);
int main(){
	int n; 
	printf("Nhap do dai cua mang 1: ");
	scanf("%d",&n);
	int m; 
	printf("Nhap do dai cua mang 2: ");
	scanf("%d",&m);
	int *pArr = NULL;
	int *pArr2 = NULL;
	pArr = (int *)malloc(n * sizeof(int));
	pArr2 = (int *)malloc(m * sizeof(int));
	if (pArr == NULL) {
        printf("Khong the cap phat bo nho.\n");
        return 1;
    }
    printf("Nhap phan tu cua mang 1 \n");
    for(int i=0;i<n;i++){
    	printf("Nhap phan tu thu %d: ",i);
    	scanf("%d", pArr + i);
	}
	printf("\n Nhap phan tu cua mang 2 \n");
	    for(int i=0;i<m;i++){
    	printf("Nhap phan tu thu %d: ",i);
    	scanf("%d", pArr2 + i);
	}
	mergeArr(&pArr,&n,&pArr2,&m);
	for(int i=0;i<n;i++){
		printf("%d ", *(pArr + i));
	}
}
void mergeArr(int **pArr, int *n, int **pArr2, int *m) {
    *pArr = (int *)realloc(*pArr, (*n + *m) * sizeof(int));
    if (*pArr == NULL) {
        printf("Khong the cap phat bo nho.\n");
        return;
    }
    for (int i = 0; i < *m; i++) {
        (*pArr)[*n + i] = (*pArr2)[i];
    }
    *n += *m;
    free(*pArr2);
    *pArr2 = NULL;
}

