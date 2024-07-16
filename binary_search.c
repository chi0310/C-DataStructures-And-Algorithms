#include <stdio.h>

void binary_search(int *arr, int size, int target){
    int l = 0;
    int r = size -1 ;
    while (l <= r) {
        int mid = (l+r)/2;
        if (arr[mid] == target){
            printf("find target %d at index: %d \n", target, mid);
            return;
        }
        if (arr[mid] < target){
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    printf("target not found \n");
}

int main() {
    int arr1[] = {1, 3, 5 , 7, 9};
    int arr1_size = sizeof(arr1)/sizeof(arr1[0]);
    binary_search(arr1, arr1_size, 1);
    binary_search(arr1, arr1_size, 2);
    binary_search(arr1, arr1_size, 5);
    binary_search(arr1, arr1_size, 9);
    
    printf("============================\n");

    int arr2[] = {1, 3, 4 , 5, 7, 9, 13, 24};
    int arr2_size = sizeof(arr2)/sizeof(arr2[0]);
    binary_search(arr2, arr2_size, 9);
    binary_search(arr2, arr2_size, 24);
    binary_search(arr2, arr2_size, 25);
}