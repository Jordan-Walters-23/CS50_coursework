#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height, row, block, space, gap;
    do
    {
        height = get_int("Pyramid Height: ");
    }
    while (height < 1 || height > 8);


    for (row = 0; row < height; row++)
    {
        for (space = 0; space < height - row - 1; space++)
        {
            printf(" ");
        }
        for (block =  0; block <= row; block++)
        {
            printf("#");
        }
        for (gap = 0; gap <2; gap++)
        {
            printf(" ");
        }
        for (block =  0; block <= row; block++)
        {
            printf("#");
        }
        printf("\n");
    }
}
