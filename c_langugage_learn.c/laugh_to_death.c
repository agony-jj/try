// #include <stdio.h>
// #include <stdlib.h>
// int main(){
    
    
//     return 0;
// }
// #include <stdio.h>
 
// void insertionSort(int arr[], int n) {
//     int i, key, j;
//     for (i = 1; i < n; i++) {
//         key = arr[i];
//         j = i - 1;
//         // Move elements of arr[0..i-1], that are greater than key,
//         // to one position ahead of their current position
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j = j - 1;
//         }
//         arr[j + 1] = key;
//     }
// }
 
// int main() {
//     int arr[] = {5, 3, 8, 4, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     insertionSort(arr, n);
//     printf("Sorted array: \n");
//     for (int i = 0; i < n; i++)
//         printf("%d ", arr[i]);
//     return 0;
// }
#include <stdio.h>
 
// Function to swap two elements
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
// Function to partition the array
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // pivot
    int i = (low - 1); // Index of smaller element
 
    for (int j = low; j <= high - 1; j++) {
        // If current element is smaller than the pivot
        if (arr[j] < pivot) {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
 
// Function to implement Quick sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // pi is partitioning index, arr[p] is now at right place
        int pi = partition(arr, low, high);
 
        // Separately sort elements before partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
 
int main() {
    int arr[] = {5, 3, 8, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}