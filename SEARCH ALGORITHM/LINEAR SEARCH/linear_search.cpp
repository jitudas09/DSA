#include<bits/stdc++.h>
using namespace std ; 

int linear_search(int arr[] , int n, int key ) {

    for (int i = 0 ; i<n ; i++){
        
        if(arr[i]==key ) return i ;
    }
    return -1 ; 
}

int main (){

    int arr[]={10,20,30,40,50} ;

    int n = sizeof(arr) / sizeof(arr[0]) ;

    int key = 30 ; 
    int result = linear_search(arr,n,key) ; 

    if(result !=-1 )  cout << key << " found at index " << result << endl ; 
    else cout << key << " not found." << endl ;

    return 0 ;
}