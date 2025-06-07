#include "ballsortpuzzle.h"
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main()
{

    const int rows = 4;
    const int cols = 6;
    char field[rows][cols];
    int x, y;

    srand(time(NULL));

    generator(rows, cols, field);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
        {
            printf(" %c |", field[i][j]);
        }
        printf("\n");
    }
    
    while(! check(rows, cols, field)) {
        printf("Enter what:");
        scanf("%d", &x);

        printf("Enter where:");
        scanf("%d", &y);

        down_possible(rows, cols, field, x, y);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++)
            {
                printf(" %c |", field[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}