# Binary Search

Binary search is the most efficient searching algorithm having a run-time complexity of O(log2 N). This algorithm works only on a sorted list of elements.

Binary search begins by comparing the middle element of the list with the target element. If the target value matches the middle element, its position in the list is returned. If it does not match, the list is divided into two halves. The first half consists of the first element to middle element whereas the second half consists of the element next to the middle element to the last element. 

1. Pseudo Code
<pre>
BINARY SEARCH(arr, x)
    start = 0, end = length(arr)-1
    while(start<=end):
        mid = (start+end)/2;
        if(arr[mid]==x) -> element found, loop break
        else if (arr[mid] < x) -> start=mid+1; (element in right part of array)
        else end = mid-1 (element in left part of array)
    loop end
    means element not found
</pre>

2. Time Complexity - <b>O(log2 N)</b>

3. Space Complexity - <b>O(1)</b>

4. Key Point<br>
Binary search obviously works on searching for elements in a sorted array. But if you think about the reason why it works is because the array itself is monotonic ( either increasing or decreasing ). So, if you are a particular position, you can make a definite call whether the answer lies in the left part of the position or the right part of it.<br>
Similar thing can be done with monotonic functions ( monotonically increasing or decreasing ) as well.
Lets say we have f(x) which increases when x increases.<br>
So, given a problem of finding x so that `f(x) = p`, I can do a binary search for x.<br>
At any instance,
-  if `f(current_position) > p`, then I will search for values lower than current_position.
- if `f(current_position) < p`, then I will search for values higher than current_position
- if `f(current_position) = p`, then I have found my answer.

