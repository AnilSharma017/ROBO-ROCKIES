#include <stdio.h>
#include <math.h>

int main()
{
    int radius = 6;
    int x, y;

    for (y = -radius; y <= radius; y++)
    {
        for (x = -radius; x <= radius; x++)
        {
            if ((x * x + y * y) <= radius*radius)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

