#include <stdio.h>
#include "my_mat.h"

int main() {
    char ch;
    int i,j;
    while (1){
        ch = getchar();
        switch (ch) {
            case 'A':
                get_matrix();
                Floyd_Warshall_Algo();
                break;
            case 'B':
                scanf("%d %d" , &i, &j);
                check_path(i,j);
                break;
            case 'C':
                scanf("%d %d" , &i, &j);
                shortest_path(i,j);
                break;
            case 'D':
                return 0;
        }
    }
}

