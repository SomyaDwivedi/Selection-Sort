#include <stdio.h>

void selectionSort(int arr[], int arr_size) {

	for (int i = 0; i < arr_size - 1; i++) {

		int min_idx = i;
		for (int j = i + 1; j < arr_size; j++) {
			if (arr[j] < arr[i]) {
				min_idx = j;
			}
		}

		int temp = arr[min_idx];
		arr[min_idx] = arr[i];
		arr[i] = temp;

	}
}

int main() {

	int arr[] = { 1,4,2,5,7,9,3,6,8,19,15,12,11,13,18,14,17,16};
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	printf("Unsorted array: \n");
	for (int i = 0; i < arr_size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	selectionSort(arr, arr_size);

	printf("Sorted array: \n");
	for (int i = 0; i < arr_size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}