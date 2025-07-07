#include <stdio.h>

void printArray(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void bubbleSort(int array[], int size)
{
    int i, j, temp, swapped;

    for (i = 0; i < size - 1; i++)
    {
        swapped = 0;
        printf("Pass %d:\n", i + 1);

        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

                swapped = 1;
                printArray(array, size);
            }
        }

        if (!swapped)
        {
            printf("Pertukaran berakhir.\n\n");
            break;
        }

        printf("\n");
    }
}

int main()
{
    int data[] = {64, 34, 25, 12, 22, 11, 90, 61, 55, 30};
    int size = sizeof(data) / sizeof(data[0]);
    int i;

    printf("Array sebelum diurutkan:\n");
    printArray(data, size);
    printf("\n");

    bubbleSort(data, size);

    printf("Array setelah diurutkan:\n");
    printArray(data, size);

    return 0;
}
