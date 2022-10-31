#include<stdio.h>


void bub(int arr[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j=n-i-1;j++){
            if(arr[j]>arr[j+1]){
                arr[j]=arr[j]+arr[j+1];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];
            }
        }
    }
    printf("After sorting : ");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}


void main(){
    int arr[999],n,i;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    bub(arr,n);
}

