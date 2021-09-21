#include <stdio.h>

void product(int m, int n, int p, double A[m][n], double B[n][p], double C[m][p])
{
    int i,j,k;
    //int m=3,n=5,p=4;
    for(i=0; i<m; i++)
    {
        for(k=0; k<p; k++)
        {
            for(j=0; j<n; j++)
            {
                C[i][k]+= A[i][j]*B[j][k];
            }
        }
    }
}

int main()
{
    int m=3,n=5,p=4;
    double A[3][5] = {
        {1, 2, 3, 4, 5 },
        {6, 7, 8, 9, 10},
        {11,12,13,14,15}
    };

    double B[5][4] = {
        {1, 2, 3, 4 },
        {5, 6, 7, 8 },
        {9, 10,11,12},
        {13,14,15,16},
        {17,18,19,20}
    };

    double C[3][4] = {
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0}
    };
    product(m,n,p, A, B, C);
    /*
    int i,j,k;
    int m=3,n=5,p=4;

    for(i=0; i<m; i++)
    {
        for(k=0; k<p; k++)
        {
            for(j=0; j<n; j++)
            {
                C[i][k]+= A[i][j]*B[j][k];
            }
        }
    }
    */
    printf("\n\t[A]*[B] : \n\n");
    int i, j;
    for(i=0; i<m; i++)
    {
        for(j=0; j<p; j++)
        {
            printf("\t%f, ", C[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
