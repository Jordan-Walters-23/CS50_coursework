#include <cs50.h>
#include <stdio.h>

int get_height(void);
void print_pyramid(int h);

int main(void)
{
    // prompt for pyramid size
    int h = get_height();

    // print pyramid
    print_pyramid(h);
}




















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



void print_pyramid(int h)
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
        printf("\n");
    }

}
