/**
 Question:
 Write a C program that accepts a group of; 
 - N domestic animals and a group of
 - and X wild animals
 your program should print (n+x) animals after entering each group
*/

#include <stdio.h>
#include <string.h>

int main(){
    char domesticAnimals[5][20];
    char wildAnimals[6][20];

    printf("Enter list of domestic animals;\n");
    for(int i=0; i<4; i++){
        printf("  Type animal number %d; ", i+1);
        scanf("%s", &domesticAnimals[i]);
    }

    printf("==========\n");

    printf("Enter list of wild animals;\n");
    for(int i=0; i<5; i++){
        printf("  Type animal number %d; ", i+1);
        scanf("%s", &wildAnimals[i]);
    }

    char combination[100] = " ";
    // concatenate combination with each animal in array of domestic animals
    for(int i=0; i<4; i++){
        strcat(combination, domesticAnimals[i]);
        (i<3) ? strcat(combination, ", ") : strcat(combination, "");
    }

    // concatenate combination with each animal in array of wild animals
    for(int i=0; i<5; i++){
        strcat(combination, wildAnimals[i]);
        (i<4) ? strcat(combination, ", ") : strcat(combination, "");
    }

    printf("___________________________________\n");

    printf("  [%s]", combination);

}