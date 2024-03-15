#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int** transpose(int** arr,int r,int c){
    int ** res = (int**)malloc(c*sizeof(int*));
    for (int i = 0; i < c; i++)
        res[i] = (int*)malloc(r*sizeof(int));

    for (int i = 0; i < c ;i++)
        for (int j = 0; j < r ;j++)
            res[i][j] = arr[j][i];
        
    return res;
    
}
