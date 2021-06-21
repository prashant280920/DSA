n = int(input())
A = list(map(int, input().split()))

# Pseudo Code
# First sort the input array, then swap all adjacent elements.

A.sort()
for i in range(0,n,2):
    j=i+1
    if(j<n):
        c = A[i]
        A[i] = A[i+1]
        A[i+1] = c
print(*A)