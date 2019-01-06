#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "data.h"


int diagram();
int setInputBits();
int inputBits();
int outputBits();
int resetBits();
int clockBits();

char commandInput[] = "";

int main () {
    if (startText == 0){
    printf("Type help to get started\n");
    startText = 1;
    }
    
    scanf("%s", commandInput);
    
    if((strcmp(commandInput, "setin") == 0) || strcmp(commandInput, "setinput") == 0){//set the states of the inputs
        setInputBits();
    }
    
    else if((strcmp(commandInput, "clk") == 0) || (strcmp(commandInput, "clock") == 0) || (strcmp(commandInput, "latch") == 0)){//lath the input to the outputs
        clockBits();
    }
    
    else if((strcmp(commandInput, "help") == 0)){//lath the input to the outputs
        printf("----------------------------------------\n");
        printf("Possible Commands -->\n");
        printf("<setin / setinput> sets the input bits to either high or low (0/1)\n");
        printf("<clk / clock / latch> latches over the input bits to the corresponding output bits\n");
        printf("<rst / reset> sets all input and output bits to 0\n");
        printf("<diagram> shows a diagram of the input and output bits\n");
        printf("<exit> exit the program\n");
        printf("----------------------------------------\n");
    }
    
    else if((strcmp(commandInput, "rst") == 0) || (strcmp(commandInput, "reset") == 0)){//reset all inputs and outputs
        resetBits();
    }
    
    else if((strcmp(commandInput, "exit") == 0) || (strcmp(commandInput, "e") == 0)){//reset all inputs and outputs
        exit(0);
    }
    
    else if((strcmp(commandInput, "diagram") == 0) || (strcmp(commandInput, "view") == 0)){//prints a diagram of the current states of the input and output bits
        diagram();
    }
    else{
        main();
    }
    main();
}



int diagram() {
    printf("D --> Q\n");
    printf("%d --> %d\n", D0, Q0);
    printf("%d --> %d\n", D1, Q1);
    printf("%d --> %d\n", D2, Q2);
    printf("%d --> %d\n", D3, Q3);
    printf("%d --> %d\n", D4, Q4);
    printf("%d --> %d\n", D5, Q5);
    printf("%d --> %d\n", D6, Q6);
    printf("%d --> %d\n", D7, Q7);
    main();
}

int setInputBits() {
    char setAnswer[] = "";
    int setBits;
    printf("Do you want to set all or just one of the bits?(a/o)\n");
    scanf("%s", setAnswer);
    
    
    if(strcmp(setAnswer, "o") == 0){
       
        printf("Which bit do you want to set?(0-7)\n");
        scanf("%d", &setBits);

        
        switch(setBits) {
            case 0 :
                printf("What should the value of d0 be -->\n");
                scanf("%d", &setBits);
                D0 = setBits;
                break;
            case 1 :
                printf("What should the value of d1 be -->\n");
                scanf("%d", &setBits);
                D1 = setBits;
                break;
            case 2 :
                printf("What should the value of d2 be -->\n");
                scanf("%d", &setBits);
                D2 = setBits;
                break;
            case 3 :
                printf("What should the value of d3 be -->\n");
                scanf("%d", &setBits);
                D3 = setBits;
                break;
            case 4 :
                printf("What should the value of d4 be -->\n");
                scanf("%d", &setBits);
                D4 = setBits;
                break;
            case 5 :
                printf("What should the value of d5 be -->\n");
                scanf("%d", &setBits);
                D5 = setBits;
                break;
            case 6 :
                printf("What should the value of d6 be -->\n");
                scanf("%d", &setBits);
                D6 = setBits;
                break;
            case 7 :
                printf("What should the value of d7 be -->\n");
                scanf("%d", &setBits);
                D7 = setBits;
                break;
            default :
                printf("Invalid Bit!");
        }
        
    } 
    
    if(strcmp(setAnswer, "a") == 0){
        printf("D0 -->\n");
        scanf("%d", &setBits);
        D0 = setBits;
        
        printf("D1 -->\n");
        scanf("%d", &setBits);
        D1 = setBits;
        
        printf("D2 -->\n");
        scanf("%d", &setBits);
        D2 = setBits;
        
        printf("D3 -->\n");
        scanf("%d", &setBits);
        D3 = setBits;
        
        printf("D4 -->\n");
        scanf("%d", &setBits);
        D4 = setBits;
        
        printf("D5 -->\n");
        scanf("%d", &setBits);
        D5 = setBits;
        
        printf("D6 -->\n");
        scanf("%d", &setBits);
        D6 = setBits;
        
        printf("D7 -->\n");
        scanf("%d", &setBits);
        D7 = setBits;
    }
    
    main();
}

int resetBits() {//reset all inputs and outputs to 0
    D0 = 0;
    D1 = 0;
    D2 = 0;
    D3 = 0;
    D4 = 0;
    D5 = 0;
    D6 = 0;
    D7 = 0;
    

    Q0 = 0;
    Q1 = 0;
    Q2 = 0;
    Q3 = 0;
    Q4 = 0;
    Q5 = 0;
    Q6 = 0;
    Q7 = 0;
    printf("All bits have been reset!\n");
    main();
}

int clockBits() {
    Q0 = D0;
    Q1 = D1;
    Q2 = D2;
    Q3 = D3;
    Q4 = D4;
    Q5 = D5;
    Q6 = D6;
    Q7 = D7;
    printf("Inputs have been latched to the outputs!\n");
    main();
}
