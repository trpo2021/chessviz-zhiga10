#include <stdio.h>

const int N = 8;
int main()
{
    char A[N][N];
    int i, j;

    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++) {
            A[i][j] = ' ';
            A[1][j] = 'p';
            A[6][j] = 'P';
            A[7][0] = 'R';
            A[7][1] = 'N';
            A[7][2] = 'B';
            A[7][3] = 'Q';
            A[7][4] = 'K';
            A[7][5] = 'B';
            A[7][6] = 'N';
            A[7][7] = 'R';

            A[0][0] = 'r';
            A[0][1] = 'n';
            A[0][2] = 'b';
            A[0][3] = 'q';
            A[0][4] = 'k';
            A[0][5] = 'b';
            A[0][6] = 'n';
            A[0][7] = 'r';
        }
    for (i = 0; i < N; i++) {
        printf("%d ", N - i);
        for (j = 0; j < N; j++)
            printf("%c ", A[i][j]);
        printf("\n");
    }
    printf("  ");
    for (i = 0; i < N; i++)
        printf("%c ", 97 + i);
}
