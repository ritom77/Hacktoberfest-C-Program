#include<stdio.h>
int main(){
    int i, j,arr[10],temp,n;
    for(i=0;i<10;i++){
        printf("enter number : ");
        scanf("%d",&arr[i]);
    
        j=i;
        while(j>0 && arr[j]<arr[j-1]){
            temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;

        }
    }
    for(i=0;i<10;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}