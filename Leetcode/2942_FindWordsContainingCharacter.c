#include <stdio.h>

int main(void)
{
    char *arr[] = {"hasan", "mhaim", "a", "kfda"};
    int sizee = 4;
    int arr2[4];

    for(int i = 0, n = 0; i < sizee; i++)
    {
        for (int j = 0; arr[i][j] != '\0'; j++)
        {
            if(arr[i][j] == 'x')
            {
                arr2[n] = i;
                n++;
                break;
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", arr2[i]);
    }
}