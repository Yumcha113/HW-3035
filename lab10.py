def matrixAdd(A, B, SUM):
    for i in range(3):
        for j in range(3):
            SUM[i][j] = A[i][j] + B[i][j]
    return SUM

def matrixAddAsString(A, B, SUM):
    for i in range(3):
        for j in range(3):
            SUM[i][j] = str(A[i][j]) + str(B[i][j])
    return SUM

# Matrices for A and B
A = [[1, 2, 3],
     [4, 5, 6],
     [7, 8, 9]]

B = [[9, 8, 7],
     [6, 5, 4],
     [3, 2, 1]]

SUM = [[0, 0, 0],
       [0, 0, 0],
       [0, 0, 0]]

# Printing the matrix
print("Matrix A:")
for row in A:
    print(row)

print("\nMatrix B:")
for row in B:
    print(row)

matrixAdd(A, B, SUM)
print("\nmatrixAdd result (A + B):")
for row in SUM:
    print(row)

# MatrixADDasString
SUM2 = [[0, 0, 0],
        [0, 0, 0],
        [0, 0, 0]]

matrixAddAsString(A, B, SUM2)
print("\nmatrixAddAsString result (A + B as strings):")
for row in SUM2:
    print(row)
