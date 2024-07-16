#include <stdio.h>

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int partition(int* arr, int front, int end){
    int pivot = *(arr+end);
    int i = front -1;
    for (int j = front; j<end; j++){
        if (arr[j] < pivot){
            i++;
            swap(arr+j, arr+i);
        }
    }
    i++;
    swap(arr+end, arr+i);
    return i;
}

void quick_sort(int *arr, int front, int end){
    if (front < end) {
        int pivot = partition(arr, front, end);
        quick_sort(arr, front, pivot-1);
        quick_sort(arr, pivot+1, end);
    }
}

int main(){
    int arr[11] = {3,5,1,2,8,11,9,22,33,13,12};
    for (int i=0; i<11; i++){
        printf("%d ", arr[i]);
    }
    printf("\n sort \n");
    quick_sort(arr, 0, 10);
    for (int i=0; i<11; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}