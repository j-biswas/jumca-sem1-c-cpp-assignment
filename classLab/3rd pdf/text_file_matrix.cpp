#include <stdio.h>
#include <vector>
#include <stdlib.h>


using namespace std;

int main(){
    FILE *ptr = fopen("matrix.txt","r+");
    FILE *ptr2 = fopen("new_matrix.txt","w+");
   
    vector <vector<int>> buffer_mat;
    vector <int> temp;
    do{
        char ch = fgetc(ptr);
        if(ch != '\n' && ch != EOF)
            temp.push_back(ch - 48);
        else {
            buffer_mat.push_back(temp);
            temp.clear();
        }

    } while (!feof(ptr));

    printf("No. of row : %d\nNo. of col : %d",buffer_mat.size(),buffer_mat[0].size());
    
    for (size_t i = 0; i < buffer_mat.size(); i++)
    {

        int sum = 0;
        for (size_t j = 0; j < buffer_mat[i].size(); j++)
        {
            sum+=buffer_mat[i][j];
        }
        fprintf(ptr2,"Row no. : %d , Sum : %d\n",i+1,sum);
        
    }
    

    
    
}