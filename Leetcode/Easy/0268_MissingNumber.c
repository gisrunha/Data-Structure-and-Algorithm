#include <stdio.h>

int missingNumber(int* nums, int numsSize) {

    int range_sum = (numsSize * (numsSize + 1)) / 2;
    int sum = 0;
    for (int i = 0; i < numsSize; i++)
    {
        sum += nums[i];
    }

    return range_sum - sum;
}

int main(void)
{
    int nums[] = {3, 0, 1};
    int lenn = sizeof(nums) / sizeof(nums[0]);
    
    printf("%d\n", missingNumber(nums, lenn));
}