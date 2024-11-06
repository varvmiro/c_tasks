#include <stdio.h>

void sort(int arr[], size_t count)
{
    int min = 1000000000;
    int index_min = 0;
    for (size_t j = 0; j < count; j++)
    {
        min = 1000000000;
        for (size_t i = j; i < count; i++)
        {
            if ((int)arr[i] < min)
            {
                min = arr[i];
                index_min = i;
            }
        }
        arr[index_min] = arr[j];
        arr[j] = min;
    }

    // 2
    /*min = 1000000000;
    for (size_t i = 1; i < count; i++)
    {
        if ((int)arr[i]<min)
        {
            min=arr[i];
            index_min = i;
        }
    }
    arr[index_min]=arr[1];
    arr[1]=min;*/

    for (size_t i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
}

void main()
{
    int arr[] = {5, 8, 2, 4, 22, 245, 68, 57942, 5};
    size_t count = sizeof(arr) / sizeof(int);
    sort(arr, count);
}

/*{2,4,5,5,8,22,68,245,57942}*/