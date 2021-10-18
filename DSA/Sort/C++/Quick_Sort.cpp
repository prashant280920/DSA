#include <cstdlib>
#include <iostream>
using namespace std;

// 1. Pseudo Code
//   quickSort(arr, beg, end)
//     if (beg < end)
//       pivotIndex = partition(arr,beg, end)
//       quickSort(arr, beg, pivotIndex)
//       quickSort(arr, pivotIndex + 1, end)

//   partition(arr, beg, end)
//     set end as pivotIndex
//     pIndex = beg - 1
//     for i = beg to end-1
//     if arr[i] < pivot
//       swap arr[i] and arr[pIndex]
//       pIndex++
//     swap pivot and arr[pIndex+1]
//   return pIndex + 1



//  2. Time Complexity
//    * Partition of elements - <b>O(n)</b>
//    * Best Time Complexity - <b>O(nlogn)</b>
//    * Average Time Complexity : <b>O(nlogn)</b>
//    * Worst Time Complexity : <b>O(n^2)</b>
//    Worst Case will happen when array is sorted

// 3. Space Complexity 
//    * It is an Inplace algorithm
//    * Hence require <b>O(1) space</b>

// 4. Key Points
//    * Divide and Conquer Algorithm
//    * There are different Quick Sort based on pivots.
//         1. Always pick first element as pivot.
//         2. Always pick last element as pivot (implemented below)
//         3. Pick a random element as pivot.
//         4. Pick median as pivot. 
//    * Default Quick Sort is <b>not stable</b>. But can be implemented
//    * It is an <b>inplace algorithm</b>
//    * It is <b>not an Adaptive sort</b>.




// This function takes last element
// as pivot, places
// the pivot element at its correct
// position in sorted array, and
// places all smaller (smaller than pivot)
// to left of pivot and all greater
// elements to right of pivot
int partition(int arr[], int low, int high)
{
	// pivot
	int pivot = arr[high];

	// Index of smaller element
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++)
	{
		// If current element is smaller
		// than or equal to pivot
		if (arr[j] <= pivot) {

			// increment index of
			// smaller element
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[high]);
	return (i + 1);
}

// Generates Random Pivot, swaps pivot with
// end element and calls the partition function
int partition_r(int arr[], int low, int high)
{
	// Generate a random number in between
	// low .. high
	srand(time(NULL));
	int random = low + rand() % (high - low);

	// Swap A[random] with A[high]
	swap(arr[random], arr[high]);

	return partition(arr, low, high);
}

/* The main function that implements
QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void quickSort(int arr[], int low, int high)
{
	if (low < high) {

		/* pi is partitioning index,
		arr[p] is now
		at right place */
		int pi = partition_r(arr, low, high);

		// Separately sort elements before
		// partition and after partition
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

// Driver Code
int main()
{
	int arr[] = { 10, 7, 8, 9, 1, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	quickSort(arr, 0, n - 1);
	printf("Sorted array: \n");
	printArray(arr, n);
	return 0;
}
// referecne: GFG
