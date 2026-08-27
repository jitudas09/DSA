#include <stdio.h>
#include <string.h>

#define MAX 10
#define SIZE 100

char text[SIZE] = "";

char undo_Stack[MAX][SIZE];
char redo_Stack[MAX][SIZE];

int undo_Top = -1;
int redo_Top = -1;

// thank you sir 
void pushUndo(){
    if (undo_Top < MAX - 1){
        undo_Top++;
        strcpy(undo_Stack[undo_Top], text);
    }
}

// thank you sir 
void undo(){
    if (undo_Top == -1){
        printf("\nNothing to Undo!\n");
        return;
    }
    redo_Top++;
    strcpy(redo_Stack[redo_Top], text);

    strcpy(text, undo_Stack[undo_Top]);
    undo_Top--;

    printf("\nUndo successful!\n");
}

// thank you sir 
void redo(){
    if (redo_Top == -1){
        printf("\nNothing to Redo!\n");
        return;
    }

    undo_Top++;
    strcpy(undo_Stack[undo_Top], text);

    strcpy(text, redo_Stack[redo_Top]);
    redo_Top--;

    printf("\nRedo successful!\n");
}

// thank you sir 
void addText(){
    char newText[SIZE];

    printf("\nEnter text: ");
    scanf(" %[^\n]", newText);

    pushUndo();

    strcat(text, newText);

    redo_Top = -1;

    printf("\nText added successfully!\n");
}

// thank you sir 
int main(){
    int choice;

    while (1){
        printf("\n$$$$$$$$$$$$$$$$$$$$\n");

        if (strlen(text) == 0)
            printf("Your Text: void\n");
        else
            printf("Your Text: %s\n", text);

        printf("$$$$$$$$$$$$$$$$$$$$\n");

        printf("1. Add Text\n");
        printf("2. Undo (Ctrl+Z)\n");
        printf("3. Redo (Ctrl+Y)\n");
        printf("4. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);


        switch (choice){
            case 1:
                addText();
                break;

            case 2:
                undo();
                break;

            case 3:
                redo();
                break;

            case 4:
                printf("\nProgram ended.\n");
                return 0;

            default:
                printf("\nInvalid choice!\n");
        }
    }

    return 0;
// thank you sir 
}