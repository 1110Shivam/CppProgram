#include<stdio.h>
#include<stdlib.h>
int* store(int[][4],int);
int retrieve(int *,int,int a[][4]);

int main()
{
    int ar[4][4]={{2,5,0,0},{8,5,2,0},{0,6,7,7},{0,0,8,9}};
    int i,j,*a,n=4,k=(3*n-2);
    printf(" Given Tridiagonal Matrix-\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d",ar[i][j]);
        }
        printf(" \n");
    }
    a=store(ar,n);
    printf("\n\n After representting the given tridiagonal matrix as a 1-D array- \n\n");
    for(i=0;i<n;i++)
    printf(" %d",a[i]);
    retrieve(a,n,ar);
    printf("\n\n After retrieving the tridiagonal matrix is- \n\n");

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf(" %d",ar[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int* store(int ar[][4],int n){
    int *a,k=0,i,j;
    a==(int *)malloc(3*n-2);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j||i==j-1||i==j+1){
                a[k]=ar[i][j];
                k++;
            }
        }
    }
    return a;
}
int retrieve(int *a,int n,int ar[][4]){
    int i,j,k=0;
    for(i=0;i<k;i++){
        for(j=0;j<k;j++){
            if(i==j){
                ar[i][j]=a[k];
                k++;
            }
            else
                ar[i][j]=0;
        }
    }
}