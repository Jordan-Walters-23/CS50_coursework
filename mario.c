#include <cs50.h>
#include <stdio.h>

int get_height(void);
void print_pyramids(int h);

int main(void)
{
    // prompt for pyramid size
    int h = get_height();

    // print pyramids
    print_pyramids(h);
}



















// Abstraction for get_height, do while loop and return int
int get_height(void)
{
    int height;
    do
    {
        height = get_int("Pyramid Height: ");
    }
    while (height < 1 || height > 8);
    return height;
}


// Abstraction for print_pyramids, block calculations using for loops
void print_pyramids(int h)
{
    int row, block, space;
    for (row = 0; row < h; row++)
    {
        for (space = 0; space < h - row - 1; space++)
        {
            printf(" ");
        }
        for (block =  0; block <= row; block++)
        {
            printf("#");
        }
        for (space = 0; space < 2; space++)
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
