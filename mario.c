#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //get user input for height
    //making sure number is between 1 and 8
    int height;
    do
    {
        height = get_int("What is the height?\n");
    }
    while (height < 1 || height > 8);
    //declaring variables
    int widht = 1;
    int spaces = height - 1;


    //for loop for height of building
    for (int i = height; i > 0; i--)
    {
        //loop for spaces
        for (int m = 0; m < spaces; m++)
        {
            printf(" ");
        }
        //for loop for left #'s
        for (int n = 0; n < widht; n++)
        {
            printf("#");
        }
        //print spaces between left and right #'s
        printf("  ");
        //for loop for right #'s
        for (int n = 0; n < widht; n++)
        {
            printf("#");
        }
        //next line
        printf("\n");
        //update widht
        if (widht < height)
        {
            widht += 1;
        }
        spaces -= 1;
    }
}


