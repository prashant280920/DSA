
# 1. Pseudo Code
# BUBBLE_SORT(A)
#     for i = n to 1:
#         k = n-1
#         for j=i t0 1:
#             if a[k] < a[k-1]:
#                 swap(a[k],a[k-1]);
#             k--

# 2. Time Complexity
# * Worst Case : {Big-O} O(n^2)
# * Best Case : {Omega} Ω(n)
# * Average Case : {Theta} θ(n^2)  

# 3. Space Complexity - O(n)

# 4. Key Point
# * It is Stable Sort
# * It is an Adaptive Sort
# * It is an Inplace Algorithm 
# * Bubble sort is slow
# * Bubble sort can be implemented recursively

def bubble_sort(a):
    for i in range(1,len(a)+1):
        k = len(a) - 1
        j = len(a) - i
        while(j>0):
            if a[k] < a[k-1]:

                c = a[k]
                a[k] = a[k-1]
                a[k-1] = c
            j-=1
            k-=1

n = int(input("Enter Number of elements: "))
print("Enter elements: ")
a = list(map(int, input().split()))

bubble_sort(a)
print("After Bubble Sort:",*a)