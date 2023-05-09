#include<stdio.h>
int main(){
    int a[3][3], b[3][3],c[3][3],i,j,m,n;
    
    printf("Enter the rows=");
    scanf("%d",&m);
    
    printf("Enter the coloums=");
    scanf("%d",&n);
    
    printf("Enter the matrix 1:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("Enter the matrix 2:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d",&b[i][j]);
        }
    }
    
    for (i = 0; i < m; ++i){
        int sum=0;
        for (j = 0; j < n; ++j) {
            for(int k=0;k<m;k++)
            {
            sum+= a[i][k] * b[k][j];
        }
       // printf(" sum= %d \n",sum);
        
    
        c[i][j]=sum;
        }
    }
    
     printf("\nMultiplication of two matrices: \n");
    for (i = 0; i < m; ++i){
        for (j = 0; j < n; ++j) {
            printf("%d   ", c[i][j]);
        }
                printf("\n");
            }
           
    
    return 0;
}
