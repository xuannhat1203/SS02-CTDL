#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	int findNumber;
	printf("Nhap so can tim: ");
	scanf("%d",&findNumber);
	int count = 0;
	for(int i=0;i<n;i++){
		if(arr[i] == findNumber) {
			count = count + 1;
		}
	}
	printf("%d",count);
}

