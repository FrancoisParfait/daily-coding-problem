#include <stdio.h>

int possible_numbers = 0;

int main (void)
{
    int k = 0;
    int size;

    printf("Enter the size of the array:\n");
    scanf("%d", &size);

    int array[size];

    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf_s("%d", array[size]);
    }

    printf("Enter the master number:\n");
    scanf("%d", &k);

    //Search array and compare
    for (int i = 0; i < size; i++)
    {
        int subtracted_number = 0;

        subtracted_number = k - array[i];

        for (int j = 0; j < size; j++)
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
