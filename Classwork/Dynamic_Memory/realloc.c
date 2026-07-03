#include<stdio.h>
#include<stdlib.h>

// realloc() is used to increase or decrease the size of previously allocated memory.
int main(){

    int *ptr;

    int n;

    printf("Enter No of gamers:");
    scanf("%d",&n);

    ptr=(int*)calloc(n,sizeof(int));

    if(ptr==NULL){

        printf("No memory allocation");
        exit(0);


    }

    printf("Before assigining:\n");

    for(int i=0 ; i<n ; i++){

        printf("%d\n",ptr[i]);       // print 0, 0 , 0  , ..because------->(calloc()) ; 

    }

    for(int i=0; i<n ; i++){

        ptr[i]=i+1;             
        
    }

    printf("After assigining position :\n");

    for(int i=0 ; i<n ; i++){

        printf("%d\n",ptr[i]);            // print position no ...1,2,3,4.. ;

    }

    n=n+5;                       // Add 5 more elements to the current size.

    ptr=realloc(ptr,n*sizeof(int)); // Resize the previously allocated memory.

    for(int i=0; i<n ; i++){

        ptr[i]=i+1;

    }
    printf("After realloc, updated positions :\n");

    for(int i=0 ; i<n ; i++){

        printf("%d\n",ptr[i]);

    }

    return 0 ;
}   
