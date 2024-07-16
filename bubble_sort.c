#include <stdio.h>

void bubble_sort(int *arr, int arr_size){
    for(int i=0; i<arr_size; i++){
        for(int j=0; j<arr_size-1-i; j++){
            if(arr[j] > arr[j+1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}

int main(){
    int arr[11] = {3,5,1,2,8,11,9,22,33,13,12};
    for (int i=0; i<11; i++){
        printf("%d ", arr[i]);
    }
    printf("\n sort \n");
    bubble_sort(arr, 11);
    for (int i=0; i<11; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
