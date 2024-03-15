#include "../2nd/mul_max.c"
#include "../2nd/transpose.c"

int main(){
    int r = 3,c = 4;

    int** arr1 = (int**)malloc(r*sizeof(int*));
    for (int i = 0; i < r; i++)
        arr1[i] = (int*)malloc(c*sizeof(int));

    printf("Enter %dx%d elements for  matrix1 : \n",r,c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d",&arr1[i][j]);
    
    int** arr2 = transpose(arr1,r,c);

    printf("Resulting array after transpose :\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    int** res = mul_matrix(arr1,r,c,arr2,c,r);

    printf("Resulting array after multiplication :\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    
}