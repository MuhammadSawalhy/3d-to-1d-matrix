# 3D to 1D Matrix

We need to convert 3D matrix `int[n][m][p]` to a 1D matrix `int[n * m * p]`. Ok, it seems easy, just use 3 nested for loops to loop through all items and add them to 1D matrix of size `n * m * p`. But wait a minute, a requirement is set and we should accomplish. We also need the conversion to take linear time (independent of the 3D matrix size).

**Proposed solution:**

My solution makes use of a fact about RAM (computers memory) that 3D matrices are stored linearly item by item in the memory so in the address of item `matrix_3d[i][j][k]` is the address of the first item with additional `i * m * p + j * p + k` steps.
