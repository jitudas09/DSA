
#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    int top ;

    int size ;

    int *arr ;

} Stack ;


Stack *createStack ( int size ){

    Stack *stack = (Stack *) malloc(sizeof(Stack));

    stack->top = -1 ; 
    stack->size = size ; 
    stack->arr = (int*)malloc(sizeof(int)*size) ;
    return stack ;

}

// PUSHING FUNCTION
void push( Stack *s , int value ){

    if(s->top == s->size - 1){

        printf("Overflow\n");               //if stack size is full then overflow
        return;
    }

    s->top++;
    s->arr[s->top] = value;
    printf("%d Pushed !!!!!!.\n", value);

}

// POPING FUNCTION
int pop( Stack *t ){

    if(t->top == -1){

        printf("Stack is empty !!\n");
        return -1;

    }

    int value = t->arr[t->top];
    t->top--;
    return value;

}

// PEEK FUNCTION
int peek (Stack *stack){
    if(stack->top == -1){

        printf("Stack is empty !!\n");
        return -1;
    }
    return stack->arr[stack->top];

}

// Is Empty FUNCTION
int is_empty(Stack *stack){
    return stack->top == -1;
}

//  IS FULL 
int is_full(Stack *stack){
    return stack->top == stack->size - 1;
}

// DISPLAY STACK
void display(Stack *stack){

    if(stack->top == -1){
        printf("Stack is empty !!\n");
        return;
    }

    printf("Stack elements (Top to Bottom):\n");

    for(int i = stack->top; i >= 0; i--){
        printf("%d\n", stack->arr[i]);
    }

}

// FREE MEMORY
void free_memory( Stack *stack ){

    free(stack->arr);
    free(stack);

}

int main(){

    Stack *s1 = createStack(5);

    push(s1,12);
    push(s1,13);
    push(s1,14);
    push(s1,16);
    push(s1,13);

    printf("\n");

    display(s1);

    printf("\n");

    int r = pop(s1);
    int r2 = pop(s1);

    printf( "First Pop : %d\n", r );
    printf( "Second Pop : %d\n", r2 );

    printf( "Top Element : %d\n", peek(s1) );

    if(is_empty(s1))    
        printf( "Stack is Empty\n" );
    else    
        printf("Stack is NOT Empty\n" );

    if(is_full(s1))   
        printf( "Stack is Full\n" );

    else 
        printf( "Stack is NOT Full\n" );

    free_memory(s1);

    return 0;

}