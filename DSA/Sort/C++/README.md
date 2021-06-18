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