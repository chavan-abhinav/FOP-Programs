#include <stdio.h>
#define ABS(x) ((x) < 0 ? -(x) : (x))

int main() {
    int n, i, j, k;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int mat_1[n][n], mat_2[n][n];

    printf("Enter elements of Matrix-1 (%dx%d):\n", n, n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &mat_1[i][j]);

    printf("Enter elements of Matrix-2 (%dx%d):\n", n, n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &mat_2[i][j]);

    /* 
       1) Addition of two matrices */
    int add[n][n];
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            add[i][j] = mat_1[i][j] + mat_2[i][j];

    printf("\n--- 1) Addition Result ---\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d\t", add[i][j]);
        printf("\n");
    }

    /*
       2) Saddle Point of Matrix-1
    */
    printf("\n--- 2) Saddle Point of Matrix-1 ---\n");
    int found = 0;
    for (i = 0; i < n; i++) {
        int row_min = mat_1[i][0];
        int min_col = 0;
        for (j = 1; j < n; j++) {
            if (mat_1[i][j] < row_min) {
                row_min = mat_1[i][j];
                min_col = j;
            }
        }
        int is_col_max = 1;
        for (k = 0; k < n; k++) {
            if (mat_1[k][min_col] > row_min) {
                is_col_max = 0;
                break;
            }
        }
        if (is_col_max) {
            printf("Saddle point at mat_1[%d][%d] = %d\n", i, min_col, row_min);
            found = 1;
        }
    }
    if (!found)
        printf("No saddle point exists in Matrix-1.\n");

    /*
       3) Inverse of Matrix-1 using Gauss-Jordan*/
    printf("\n--- 3) Inverse of Matrix-1 ---\n");
    double aug[n][2 * n];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            aug[i][j] = mat_1[i][j];
        for (j = n; j < 2 * n; j++)
            aug[i][j] = (i == j - n) ? 1.0 : 0.0;
    }

    int singular = 0;
    for (k = 0; k < n && !singular; k++) {
        
        int pivot = k;
        for (i = k + 1; i < n; i++)
            if (ABS(aug[i][k]) > ABS(aug[pivot][k]))
                pivot = i;

        for (j = 0; j < 2 * n; j++) {
            double tmp = aug[k][j];
            aug[k][j]  = aug[pivot][j];
            aug[pivot][j] = tmp;
        }

        
        if (ABS(aug[k][k]) < 1e-9) {
            singular = 1;
            break;
        }

        double div = aug[k][k];
        for (j = 0; j < 2 * n; j++)
            aug[k][j] /= div;

        for (i = 0; i < n; i++) {
            if (i == k) continue;
            double factor = aug[i][k];
            for (j = 0; j < 2 * n; j++)
                aug[i][j] -= factor * aug[k][j];
        }
    }

    if (singular) {
        printf("Matrix-1 is singular. Inverse does not exist.\n");
    } else {
        printf("Inverse of Matrix-1:\n");
        for (i = 0; i < n; i++) {
            for (j = n; j < 2 * n; j++)
                printf("%8.4f  ", aug[i][j]);
            printf("\n");
        }
    }

    /*
       4) Magic Square check on Matrix-1*/
    printf("\n--- 4) Magic Square Check for Matrix-1 ---\n");
    int magic_sum = 0, is_magic = 1;

    for (j = 0; j < n; j++)
        magic_sum += mat_1[0][j];

    for (i = 1; i < n && is_magic; i++) {
        int row_sum = 0;
        for (j = 0; j < n; j++)
            row_sum += mat_1[i][j];
        if (row_sum != magic_sum) is_magic = 0;
    }

    for (j = 0; j < n && is_magic; j++) {
        int col_sum = 0;
        for (i = 0; i < n; i++)
            col_sum += mat_1[i][j];
        if (col_sum != magic_sum) is_magic = 0;
    }

    if (is_magic) {
        int diag1 = 0;
        for (i = 0; i < n; i++)
            diag1 += mat_1[i][i];
        if (diag1 != magic_sum) is_magic = 0;
    }

    if (is_magic) {
        int diag2 = 0;
        for (i = 0; i < n; i++)
            diag2 += mat_1[i][n - 1 - i];
        if (diag2 != magic_sum) is_magic = 0;
    }

    if (is_magic)
        printf("Matrix-1 IS a Magic Square. Magic constant = %d\n", magic_sum);
    else
        printf("Matrix-1 is NOT a Magic Square.\n");

    return 0;
}




