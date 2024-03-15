#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>



double randomNo(){
    return ((double)rand()/RAND_MAX + rand()%100)*((rand()%2)?1:-1 );
}

double** sq_matrix_gen(int d){
    double **mat = malloc(d*sizeof(double*));
    for (int i = 0; i < d; i++)
        mat[i] = malloc(d*sizeof(double));


    for (int i = 0; i < d; i++){
        double sum = 0;
        for (int j = 0; j < d-1; j++){
            mat[i][j] = randomNo();
            sum+=mat[i][j];
        }
        mat[i][d-1] = 1 - sum;
    }

    return mat;
}

double** mul_matrix(double **arr1,int r1,int c1,double **arr2,int r2,int c2){
    double ** res = (double**)malloc(r1*sizeof(double*));
    for (int i = 0; i < r1; i++)
        res[i] = (double*)calloc(c2,sizeof(double));
    
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            for (int k = 0; k < c1; k++)
               res[i][j]+= arr1[i][k]*arr2[k][j];

    return res;
}


double** colVcreate(int d){
    double ** res = (double**)malloc(d*sizeof(double*));
    for (int i = 0; i < d; i++)
        res[i] = (double*)malloc(sizeof(double));

    for (int i = 0; i < d; i++)
        res[i][0] = 1/(double)d;
    
    return res;
}


int main(){
    int d,p;
    printf("Enter the dimention of the sq. matrix (n) : ");
    scanf("%d",&d);

    printf("Column Vector R : \n");
    double **colVector = colVcreate(d);
    for (int i = 0; i < d; i++)
        printf("%f \n",colVector[i][0]);
   
    printf("Generated Matrix (M) : \n");

    double** mat = sq_matrix_gen(d);

    for (int i = 0; i < d; i++){
        for (int j = 0; j < d; j++)
            printf("%011f\t",mat[i][j]);
        printf("\n");
    }

    printf("Enter the power (p) : ");
    scanf("%d",&p);

    double** pow_mat = malloc(d*sizeof(double*));
    for (int i = 0; i < d; i++)
        pow_mat[i] = malloc(d*sizeof(double));
        
    for (int i = 0; i < d; i++)
        for (int j = 0; j < d; j++)
            pow_mat[i][j] = mat[i][j];

    for (int i = 1; i < p; i++)
        pow_mat = mul_matrix(pow_mat,d,d,mat,d,d);
    
    for (int i = 0; i < d; i++){
        for (int j = 0; j < d; j++)
            printf("%011f\t",pow_mat[i][j]);
        printf("\n");
    }


    printf("Resultanr Matrix (R) : \n");
    double **res = mul_matrix(pow_mat,d,d,colVector,d,1);

    for (int i = 0; i < d; i++)
        printf("%f \n",res[i][0]);

}