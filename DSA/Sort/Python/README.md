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
* Worst Case Time Complexity : {Big-O} O(n^2)
* Best Case Time Complexity : {Big-O} O(n)
* Average Time Complexity : {Theta} θ(n^2)  

3. Key Point
* It is <b>Stable Sort</b>
* It is an <b>Adaptive Sort</b>