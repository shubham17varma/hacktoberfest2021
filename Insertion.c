#include <stdio.h>
#include <stdlib.h>
int n;
 
void insertion(int a[], int n)
{
    int i,j,x;
    for (i=1;i<n;i++){
        x = a[i];
        j =i-1;
        while(j>=0 && a[j]> x){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=x;
    }
}
 
void main(){
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements:");
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    insertion(a,n);
    printf("val in array:");
    for (int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
