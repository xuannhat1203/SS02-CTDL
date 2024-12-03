#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	printf("nhap so phan tu cua mang: ");
	scanf("%d",&n);
	int *pArr = NULL;
	pArr = (int *)malloc((n-1)*sizeof(int));
	if(pArr == NULL){
		printf("Bo nho khong duoc cap phat");
		return 1;
	}
	for(int i=0;i<n-1;i++){
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",pArr+i);
	}
	int sum = (n*(n+1))/2;
 	int totalActual = 0;
    for (int i = 0; i < n - 1; i++) {
        totalActual += *(pArr + i);
    }
	int num = sum - totalActual;
	printf("%d",num);
	free(pArr);
}

