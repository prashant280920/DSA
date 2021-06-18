n = int(input("Enter Number of elements: "))
print("Enter elements: ")
a = list(map(int, input().split()))

# Pseudo Code
# INSERTION_SORT(A)
#     for i = 1 to n:
#         for j = i-1 ; j>=0; j--
#             if a[j] > a[j+1]
#                 swap( a[j], a[j+1])
#             else
#                 break

# Time Complexity
# Best Case Time Complexity : {Big-O} O(n)
# Worst Case Time Complexity : {Big-O} O(n^2)
# Average Time Complexity : {Theta} θ(n^2)  

# Key Point
# It is Stable Sort
# It is an Adaptive Sort

def insertion_sort(a):
    for i in range(1,len(a)):
        j = i-1
        while (j>=0):
            if a[j] <= a[j+1] : break
            else : 
                c = a[j]
                a[j] = a[j+1]
                a[j+1] = c 
            j-=1

insertion_sort(a)
print(*a)
