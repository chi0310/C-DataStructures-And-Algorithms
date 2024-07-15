#include <stdio.h>

void insertion_sort(int *arr, int arr_size){
    for(int i=1; i<arr_size; i++){
        int key = arr[i];
        int j = i-1;
        for(j; j>=0; j--){
            if (key > arr[j]) {break;}
            arr[j+1] = arr[j];
        }
        arr[j+1] = key;
    }
}

int main(){
    int arr[6] = {3,1,2,4,8,6};
    for (int i=0; i<6; i++){
        printf("%d ", arr[i]);
    }
    printf("\n sort \n");
    insertion_sort(arr, 6);
    for (int i=0; i<6; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}