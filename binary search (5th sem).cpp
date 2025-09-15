#include <stdio.h>
int binary_search(int arr[], int start, int end) {
    int target = 8;
    int flag = 0;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (target == arr[mid]) {
            flag = 1;
            return flag;
        } else if (target > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return 0;
}
int main() {
    int arr[6] = {5, 3, 23, 6, 8, 4};
    int start = 0, end = 5;
    int flag;
    flag = binary_search(arr, start, end);
    if (flag == 1) {
        printf("Element found\n");
    } else {
        printf("Element not found\n");
    }
    return 0;
}

