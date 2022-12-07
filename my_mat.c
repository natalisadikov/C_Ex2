# include <stdio.h>
# include "my_mat.h"
# define min(x,y) (((x) < (y)) ? (x) : (y))

int matrix[n][n];
void get_matrix() {
    // receive the matrix
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &matrix[i][j]);
            if (i != j && matrix[i][j] == 0) {
                matrix[i][j] = INFINITY;
            }

        }

    }
}

void Floyd_Warshall_Algo() {
    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            //skip the k'th row
            if (k == i) {
                continue;
            }
            for (int j = 0; j < n; ++j) {
                //skip the k'th col
                if (k == j) {
                    continue;
                }
                //skip diagonal
                if (i == j) {
                    continue;
                }
                matrix[i][j] = min(matrix[i][j], matrix[i][k] + matrix[k][j]);

            }
        }
    }
}

void check_path(int i,int j) {
    //two same vertex or INFINITY distance between the vertex
    if (i == j || matrix[i][j] == INFINITY) {
        printf("False\n");
    }
    else {
        printf("True\n");
    }
}

void shortest_path(int i,int j){
    if (i == j || matrix[i][j] == INFINITY) {
        printf("-1\n");
    }
    else{
        printf("%d\n",matrix[i][j]);
    }
}
