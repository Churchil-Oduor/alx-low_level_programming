#include "sort.h"

void bubble_sort(int arr[], int len)
{
        int flag = 1;
        int x;
        int y;

        for (x = 0; x < len; x++)
        {
                for (y = 0; y < len - x - 1; y++)
                {
                        if (arr[y] > arr[y + 1])
                        {
                                swap(&arr[y], &arr[y + 1]);
                                flag = 0;
                        }
                }

                if (flag)
                        break;
                else
                        flag = 1;
        }
}


void swap(int *x, int *y)
{
        int temp = *x;
        *x = *y;
        *y = temp;
}
