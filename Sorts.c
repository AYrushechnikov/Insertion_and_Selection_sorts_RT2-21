#include <stdio.h>
void InsertionSort(int mas[], int size) {
	int i, var1;
	int var2 = 0;
	for (i = 0; i < size; i++) {
		var1 = mas[i];
		var2 = i - 1;
		while (var2 >= 0 && mas[var2] > var1) {
			mas[var2 + 1] = mas[var2];
			var2 = var2 - 1;
		}
		mas[var2 + 1] = var1;
	}
}

void SelectionSort(int arr[], int n) {
	int var1, var2;
	int min;

	for (int var1 = 0; var1 < n - 1; var1++) {
		min = var1;
		for (int var2 = var1 + 1; var2 < n; var2++) {
			if (arr[var2] < arr[min]) {
				min = var2;
			}
		}
		if (min != var1) {
			int tmp = arr[min];
			arr[min] = arr[var1];
			arr[var1] = tmp;
		}
	}
}