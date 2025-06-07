#include "ballsortpuzzle.h"
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

void ball_sort_puzzle();

int main() {
    printf("Welcome to the Ball Sort Puzzle Game!\n");
    printf("Your goal is to sort the symbols so that each column contains only one type.\n");
    printf("Let's start!\n\n");

    ball_sort_puzzle(); 

    return 0;
}