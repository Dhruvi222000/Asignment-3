/*
program-6  WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array.
*/

#include<stdio.h>
main()
{

        int rows1, cols1, rows2, cols2;
        printf("\n\n\t  Enter the number of rows and columns of first matrix: ");
        scanf("%d %d", &rows1, &cols1);
    
       printf("\n\n\t  Enter the number of rows and columns of second matrix: ");
       scanf("%d %d", &rows2, &cols2);
    
        if (rows1 != rows2 || cols1 != cols2)
	 {
        printf("\n\n\t  Matrix addition, subtraction, and multiplication not possible ");
        
     }
    
      int matrix1[rows1][cols1], matrix2[rows2][cols2];
      int i,j;
      printf("\n\n\t  Enter elements of first matrix :");
      for (i = 0; i < rows1; i++)
	 {
        for (j = 0; j < cols1; j++)
	 {
        scanf("%d", &matrix1[i][j]);
     }
     }
    
       printf("\n\n\t  Enter elements of second matrix :");
       for (i = 0; i < rows2; i++)
	 {
        for (j = 0; j < cols2; j++)
     {
        scanf("%d", &matrix2[i][j]);
    }
    }
    
    matrixAddition(rows1, cols1, matrix1, matrix2);
    printf("\n\n ");
    
    matrixSubtraction(rows1, cols1, matrix1, matrix2);
    printf("\n\n ");
    
    matrixMultiplication(rows1, cols1, matrix1, rows2, cols2, matrix2);
    
}
}


