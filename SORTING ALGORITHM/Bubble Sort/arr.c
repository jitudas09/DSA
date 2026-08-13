#include<stdio.h>
int main (){
    int n ; 
    scanf("%d",&n) ; 
    int arr[n] ; 
    for ( int i = 0 ; i<n ; i++){
        scanf("%d",arr[i]) ; 
    }
    int multi = 1 ; 
    for (int i = 0 ; i<n ; i++){
       if(arr[i]==0) continue ; 
       else  multi*=arr[i] ; 
    }
    printf("Your multiply result : %d",multi) ; 

    return 0 ; 
}