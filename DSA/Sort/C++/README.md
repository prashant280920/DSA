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