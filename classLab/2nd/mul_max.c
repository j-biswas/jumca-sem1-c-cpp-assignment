#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int** mul_matrix(int **arr1,int r1,int c1,int **arr2,int r2,int c2){

    int ** res = (int**)malloc(r1*sizeof(int*));
    for (int i = 0; i < r1; i++)
        res[i] = (int*)malloc(c2*sizeof(int));
    
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {   
            int sum = 0;
            for (int k = 0; k < c1; k++)
            {
               sum+= arr1[i][k]*arr2[k][j];
            }
            
            res[i][j] = sum;
        }
        
    }

    return res;
    
}
// int main(){
//     int c1 = 4,c2 = 3,r1 = 3,r2 = 4;
    
//     printf("Enter Dimentions (r1,c1,r2,c2) :\n");
//     scanf("%d %d %d %d",&r1,&c1,&r2,&c2);

//     if(!c1==r2){ 
//         printf("No.of cols in 1st matrix should be equal to No. of rows in 2nd mareix \n");
//         return 0;
//     }
//     int ** arr1 = (int**)malloc(r1*sizeof(int*));
//     for (int i = 0; i < r1; i++)
//         arr1[i] = (int*)malloc(c1*sizeof(int)); 
//     int ** arr2 = (int**)malloc(r1*sizeof(int*));
//     for (int i = 0; i < r2; i++)
//         arr2[i] = (int*)malloc(c2*sizeof(int)); 

//     printf("for arr 1 :\n");
//     for (int i = 0; i < r1; i++)
//     {
//         for (int j = 0; j < c1; j++)
//         {
//             scanf("%d",&arr1[i][j]);
//         }
//     }

//     printf("for arr 2 :\n");
//     for (int i = 0; i < r2; i++)
//     {
//         for (int j = 0; j < c2; j++)
//         {
//             scanf("%d",&arr2[i][j]);
//         }
//     }



//     printf("Result : \n");
//     int** res = mul_matrix(arr1,r1,c1,arr2,r2,c2);





//     for (int i = 0; i < r1; i++)
//     {
//         for (int j = 0; j < c2; j++)
//         {
//             printf("%d ",res[i][j]);
//         }
//         printf("\n");
//     }

    
// }
