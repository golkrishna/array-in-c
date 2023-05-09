#include<stdio.h>
#include <stdlib.h>
int main(){
    int a[3][3], b[3][3],i,j,m1,m2,n1,n2,flag=1;
    printf("Enter the order of the matrix A:");
    scanf("%d %d", &m1, &n1);
    printf("Enter the order of the matrix B:");
    scanf("%d %d", &m2,&n2);
    
    printf("Enter the matrix 1:\n");
    for(i=0;i<m1;i++){
        for(j=0;j<n1;j++){
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("Enter the matrix 2:\n");
    for(i=0;i<m2;i++){
        for(j=0;j<n2;j++){
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nMatrix 1: \n");
    for (i = 0; i < m1; ++i){
        for (j = 0; j < n1; ++j) {
            printf("%d   ", a[i][j]);
        }
                printf("\n");
            }
            
    printf("\nMatrix 2: \n");
    for (i = 0; i < m2; ++i){
        for (j = 0; j < n2; ++j) {
            printf("%d   ", b[i][j]);
        }
                printf("\n");
    }
   /* Comparing two matrices for equality */
   if(m1 == m2 && n1 == n2){
      printf("Matrices can be compared");
      for(i=0; i<m1; i++){
         for(j=0; j<n2; j++){
            if(a[i][j] != b[i][j]){
               flag = 0;
               break;
            }
         }
      }
   }
   else{
      printf(" Cannot be compared\n");
      exit(1);
   }
   if(flag == 1 )
      printf("Two matrices are equal");
   else
   printf("But,two matrices are notequal");

    return 0;
}
