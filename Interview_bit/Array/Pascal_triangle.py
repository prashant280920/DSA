x = int(input())
A = []

# Pseudo Code
# For Row i, Row[i][0] = Row[i][i] = 1. 
# And Row[i][j] = Row[i-1][j] + Row[i-1][j-1], when j belongs to [1, i)

for i in range(1,x+1):
    B = []
    for j in range(i):
        if(i == 1 or i==2):
            B.append(1)
        else:
            if (j==0 or j ==i-1):
                B.append(1)
            else:
                B.append(A[i-2][j-1] + A[i-2][j])
    A.append(B)
for i in A:
    print(i)