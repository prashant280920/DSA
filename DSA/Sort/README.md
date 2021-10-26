# Different Sorting Algorithms

### Insertion Sort
1. Pseudo Code
<pre>
INSERTION_SORT(A)
    for i = 1 to n:
        for j = i-1 ; j>=0; j--
            if a[j] > a[j+1]
                swap( a[j], a[j+1])
            else
                break
</pre>

2. Time Complexity
    * Worst Case Time Complexity : {Big-O} <b>O(n^2)</b>
    * Best Case Time Complexity : {Big-O} <b>O(n)</b>
    * Average Time Complexity : {Theta} <b>θ(n^2)  </b>

3. Space Complexity - <b>O(1)</b>

4. Key Point
    * It is <b>Stable Sort</b>
    * It is an <b>Adaptive Sort</b>
******
### Bubble Sort
1. Pseudo Code
<pre>
BUBBLE_SORT(A)
    for i = n to 1:
        k = n-1
        for j=i t0 1:
            if a[k] < a[k-1]:
                swap(a[k],a[k-1]);
            k--
</pre>

2. Time Complexity
    * Worst Case : {Big-O} <b>O(n^2)</b>
    * Best Case : {Omega} <b>Ω(n)</b>
    * Average Case : {Theta} <b>θ(n^2)  </b>

3. Space Complexity - <b>O(1)</b>

4. Key Point
    * It is <b>Stable Sort</b>
    * It is an <b>Adaptive Sort</b>
    * It is an <b>Inplace Algorithm </b>
    * Bubble sort is <b>slow</b>
    * Bubble sort can be implemented <b>recursively</b>
***
### Heap Sort
1. Pseudo Code
<pre>
HEAPIFY(A,index,array_len)
    largest = index, left_child=2*index+1, right_child = 2*index+2;
    if A[left_child]>A[largest] then: largest = left_child
    if A[right_child]>A[largest] then: largest = right_child
    if largest!=index then: swap(A[largest],A[index])
    recursevily check at new largest index:  Heapify(A,largest,array_len)
</pre>
<pre>
HEAP_SORT(A,n)
    for n/2 index to 0: 
        create heap using Heapify(A,i,n)
    for n-1 to 0: 
        swap(A[0],A[i]);
        maintain heap for i length of array using Heapify(A,0,i)
</pre>

2. Time Complexity :
    1. Heap
        * For Searching Root - <b>O(1)</b>
        * For Deleting Root - <b>O(log2n)</b>
        * For Inserrting element - <b>O(log2n)</b>
    2. HeapSort - <b>O(n*log2n)</b>

3. Space Complexity - <b>O(1)</b> 

4. Key Point
    * It is <b>not Stable Sort</b>
    * It is <b>not Adaptive Sort</b>
***
### Merge Sort
1. Pseudo Code:
<pre>
 MergeSort(arr[], l,  r)
 If r > l
      1. Find the middle point to divide the array into two halves:  
              middle m = l+ (r-l)/2
      2. Call mergeSort for first half:   
              Call mergeSort(arr, l, m)
      3. Call mergeSort for second half:
              Call mergeSort(arr, m+1, r)
      4. Merge the two halves sorted in step 2 and 3:
              Call merge(arr, l, m, r)
</pre>

2. Time Complexity 
    * Best Case - <b>O(nlogn)</b> 
    * Average Case - <b>O(nlogn)</b> 
    * Worst Case - <b>O(nlogn)</b>

3. Space Complexity - <b>O(n)</b>

4. Key Point 
    * Divide and Conquer algorithm. 
    * Merge Sort is useful for sorting linked lists. 
    * It is a <b>stable sort</b>  
    * It is <b>not an adaptive sort</b>
***
### Quick Sort

1. Pseudo Code
<pre>
  quickSort(arr, beg, end)
     if (beg < end)
       pivotIndex = partition(arr,beg, end)
       quickSort(arr, beg, pivotIndex)
       quickSort(arr, pivotIndex + 1, end)

   partition(arr, beg, end)
     set end as pivotIndex
     pIndex = beg - 1
     for i = beg to end-1
     if arr[i] < pivot
       swap arr[i] and arr[pIndex]
       pIndex++
     swap pivot and arr[pIndex+1]
   return pIndex + 1
</pre>


 2. Time Complexity
    * Partition of elements - <b>O(n)</b>
    * Best Time Complexity - <b>O(nlogn)</b>
    * Average Time Complexity : <b>O(nlogn)</b>
    * Worst Time Complexity : <b>O(n^2)</b>
   Worst Case will happen when array is sorted

3. Space Complexity 
    * It is an Inplace algorithm
    * Hence require <b>O(1) space</b>

4. Key Points
    * Divide and Conquer Algorithm
    * There are different Quick Sort based on pivots.
        1. Always pick first element as pivot.
        2. Always pick last element as pivot (implemented below)
        3. Pick a random element as pivot.
        4. Pick median as pivot. 
    * Default Quick Sort is <b>not stable</b>. But can be implemented
    * It is an <b>inplace algorithm</b>
    * It is <b>not an Adaptive sort</b>.