#include <stdio.h>

int main (void)
{
    int possible_numbers = 0;
    int k;
    int size;
    int i;

    printf("Enter the size of the array:\n");
    scanf("%i", &size);

    int array[size];

    printf("Enter %i numbers:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%i", &array[size]);
    }

    printf("The current array is: %i\n", array[i]);


    printf("Enter the master number:\n");
    scanf("%i", &k);

    //Search array and compare
    for (int j = 0; j < size; j++)
    {
        int subtracted_number = 0;

        subtracted_number = k - array[i];

        for (int l = 0; l < size; l++)
        {
            if (subtracted_number == array[i])
            {
                possible_numbers++;
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
