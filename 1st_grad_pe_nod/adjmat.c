#include "adjmat.h"
#include "topsort.h"
#include<stdio.h>

void adjacency_matrix(int n){
    int a[n][n],i,j;
    printf("Enter the adjacency matrix:\n");
    for(i=0;i<n;i++){
        printf("Enter row %d\n",i+1);
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }

    int* lines[n];
    for(int i = 0; i < n; i++)
    {
        lines[i] = &a[i];
    }

    topological_sort(n, lines);
}
