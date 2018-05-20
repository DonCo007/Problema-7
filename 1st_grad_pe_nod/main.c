#include <stdio.h>
#include "adjmat.h"
#include "topsort.h"
int main(){
    int n;

    printf("Enter the no of vertices:\n");
    scanf("%d",&n);
    adjmat(n);

    return 0;
}
