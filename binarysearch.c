#include<stdio.h>
int main(){
    int key, arr[]={1,2,3,4,5,6,7,8,9,10};
    printf("enter the element to find:  ");
    scanf("%d",&key);
    int ll=0,ul=9,mid,flag=0;
    while(ll<=ul){
        mid=(ll+ul)/2;
        if(arr[mid]==key){
            flag==1;
            break;
        }
        else if(key<arr[mid]){
        ll=mid-1;
        }
        else{
        ul=mid+1;
        }
    }
    for(int i=0;i<9;i++){
    if(flag==1)
        printf("found");
    
    else
        printf("NOT fOUND");
    }

return 0;
}