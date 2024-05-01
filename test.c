#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


int main() {
	double time = 0;
	int n = 10000;
	FILE* fp = fopen("res.txt", "w");
	do {
		int* a = malloc(n * sizeof(int));
		if (a == NULL) {
			fclose(fp);
			perror("Oshibka netu pamyati");
		}

		int* mas = a;
		for (int i = 0; i < n; i++) {
			*mas = rand() - RAND_MAX/2;
			mas++;
		}

		clock_t begin = clock();
		// InsertionSort(a, n);
		// SelectionSort(a, n);
		clock_t end = clock();
		time = (double)(end - begin) / CLOCKS_PER_SEC;

		fprintf(fp, "%d %.3f\n", n, time);
		printf("n = %d time = %.3f\n", n, time);

		free(a);
		n += 10000;
	} while (time < 60);

	fclose(fp);
	return 0;
}