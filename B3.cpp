#include<stdio.h>
#include<stdlib.h>
#include <stdio.h>

void rev(int arr[], int n) {
    int l = 0, r = n - 1;
    while (l < r) {
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }
}

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);  
        scanf("%d", &arr[i]);
    }

    rev(arr, n);
    printf("Mang sau khi dao nguoc: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


