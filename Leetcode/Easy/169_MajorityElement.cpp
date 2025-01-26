#include <iostream>
#include <vector>

using namespace std;

int majorityElement(vector<int>& nums)
{
  int indexx;
  for (int i = 0, l = nums.size(); i < l; i++)
    {
      int perma = 0;
      int temp = 0;
      for(int j = 0; j < l; j++)
        {
          if (nums[j] == nums[i])
          {
            temp++;
          }
        }
      if (temp > perma)
      {
        perma = temp;
        indexx = i;
      }
    }
  return nums[indexx];
}

int main() {
  vector<int> arr = {3,3,4};
  cout << majorityElement(arr);
}