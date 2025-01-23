#include <stdio.h>

int main(void)
{
    int arr[] = {9,6,4,2,3,5,7,0,1};
    int l = sizeof(arr) / sizeof(arr[0]);

    int range_sum = (l * (l + 1)) / 2;
    int sum = 0;
    for (int i = 0; i < l; i++)
    {
        sum += arr[i];
    }

    // printf("%d %d", sum, range_sum);
    if (sum < range_sum)
    {
        printf("missing : %d\n", range_sum - sum);
    }



}