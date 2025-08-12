# To Study and Implement 2D Arrays in C++
Name: Prathyush

PRN: 24070123064

Batch: ENTC A3

Overview of 2D Arrays in C++
A two-dimensional (2D) array in C++ is a collection of elements arranged in rows and columns, similar to a table. Each element is identified using two indices — one for the row and one for the column.

2D arrays are commonly used for storing data such as matrices, tables, and images.

Syntax:

cpp
Copy
Edit
data_type arrayName[rows][columns];
In C++, data in arrays is stored in row-major order, meaning that all elements of the first row are stored in consecutive memory locations, followed by the elements of the second row, and so on.

1. Input and Display of a Matrix
Theory:
This program accepts a 3×3 matrix from the user and displays it in matrix format. It uses nested loops — the outer loop iterates through the rows, while the inner loop iterates through the columns. Each element is entered individually, and the final matrix is displayed in a structured format.

Algorithm:

Declare a 3×3 integer matrix.

Use nested loops to input each element from the user.

Use nested loops again to display the matrix row by row.

Sample Output:

scss
Copy
Edit
Enter element(0,0): 3
Enter element(0,1): 4
Enter element(0,2): 5
Enter element(1,0): 3
Enter element(1,1): 2
Enter element(1,2): 2
Enter element(2,0): 7
Enter element(2,1): 4
Enter element(2,2): 5

Matrix is:
3 4 5
3 2 2
7 4 5
2. Addition of Two Matrices
Theory:
This program adds two matrices of the same dimensions. Each element in the resulting matrix is obtained by adding the corresponding elements of the two input matrices.

Algorithm:

Take the number of rows and columns as input.

Input elements for the first matrix.

Input elements for the second matrix.

For each position (i, j), compute:

bash
Copy
Edit
sum[i][j] = A[i][j] + B[i][j]
Display the resulting sum matrix.

Sample Output:

yaml
Copy
Edit
Enter number of rows: 3
Enter number of columns: 3

Enter elements of first matrix:
2
3
4
5
3
1
1
4
5

Enter elements of second matrix:
3
2
8
9
4
5
6
7
9

Sum of matrices:
5 5 12
14 7 6
7 11 14
3. Multiplication of Two Matrices
Theory:
Matrix multiplication is possible only when the number of columns in the first matrix equals the number of rows in the second matrix. The element at position (i, j) in the result matrix is calculated as the sum of products of corresponding elements from row i of the first matrix and column j of the second matrix.

Algorithm:

Take the dimensions of both matrices as input.

Input elements for matrix A.

Input elements for matrix B.

For each (i, j) in the result matrix:

Initialize sum to 0.

Multiply each element of row i in A with the corresponding element of column j in B, and add them to sum.

Assign sum to result[i][j].

Display the result matrix.

Sample Output:

less
Copy
Edit
Rows cols of A: 3 4
Rows cols of B: 4 3

Enter A matrix:
2
3
2
4
5
8
9
4
3
2
5
3

Enter B matrix:
5
6
2
3
5
6
7
11
45
...

Result matrix (3x3):
33 49 112
112 169 463
56 83 243
4. Diagonal Addition
Theory:
The main diagonal of a square matrix contains elements where the row index equals the column index. This program calculates the sum of all main diagonal elements.

Algorithm:

Take the size n of the square matrix.

Input all elements of the matrix.

Initialize sum to 0.

Loop from i = 0 to n - 1, adding matrix[i][i] to sum.

Display the sum.

Sample Output:

less
Copy
Edit
Enter number of Rows & Columns: 3

Enter elements of matrix:
Element [0][0]: 4
Element [0][1]: 3
Element [0][2]: 2
Element [1][0]: 6
Element [1][1]: 3
Element [1][2]: 4
Element [2][0]: 3
Element [2][1]: 2
Element [2][2]: 1

Sum of main diagonal elements: 8
5. Transpose of a Matrix
Theory:
The transpose of a matrix is obtained by interchanging its rows and columns. This means the element at position (i, j) in the original matrix becomes (j, i) in the transposed matrix.

Algorithm:

Take the size of the matrix as input.

Input all elements into matrix.

Use nested loops to set:

Copy
Edit
transpose[j][i] = matrix[i][j]
Display both the original and transposed matrices.

Sample Output:

less
Copy
Edit
Enter rows and columns of matrix: 3 4

Enter elements of the matrix:
Element[0][0]: 3
Element[0][1]: 2
Element[0][2]: 5
Element[0][3]: 6
Element[1][0]: 7
Element[1][1]: 3
Element[1][2]: 10
Element[1][3]: 22
Element[2][0]: 34
Element[2][1]: 67
Element[2][2]: 69
Element[2][3]: 54

Original Matrix:
3 2 5 6
7 3 10 22
34 67 69 54

Transpose of Matrix:
3 7 34
2 3 67
5 10 69
6 22 54
6.  Row-wise Element Comparison
Theory:
This program compares elements between the first and second rows of a 2×N matrix. For each column, it checks whether the elements are equal or determines which row contains the larger value.

Algorithm:

Take the number of columns c.

Input all elements for row 1.

Input all elements for row 2.

For each column j:

If arr[0][j] == arr[1][j], display "Both are equal".

Else if arr[0][j] > arr[1][j], display "Value in Row 1 is greater".

Else display "Value in Row 2 is greater".

Sample Output:

sql
Copy
Edit
Cols: 3

Enter row 1:
4
2
3

Enter row 2:
4
2
1

Comparison (Row 1 vs Row 2):
Column 0: Both are equal
Column 1: Both are equal
Column 2: Value in Row 1 is greater
