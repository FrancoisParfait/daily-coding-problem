#include <stdio.h>

int possible_numbers = 0;

int main (int argc, int argv[])
{
    //Search array and compare
    for (int i = 0; i < arraylength; i++)
    {
        int subtracted_number = 0;

        subtracted_number = k - array[i];

        for (int j = 0; j < arraylength; j++)
        {
            if (subtracted_number == array[i])
            {
                possible_numbers++
            }
        }
    }

    if (possible_numbers >= 2)
    {
        printf("True\n");
        return 0;
    }
    else
    {
        printf("False\n");
        return 1;
    }



}
