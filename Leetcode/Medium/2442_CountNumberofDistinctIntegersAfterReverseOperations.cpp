#include <bits\stdc++.h>

using namespace std;

int countDistinctIntegers(vector<int> &nums)
{
  set<int> new_arr;
  int l = nums.size();
  for (int i = 0; i < l; i++)
  {
    int y = nums[i];
    new_arr.insert(y);

    int num = 0;
    while (y != 0)
    {
      num = (num * 10) + (y % 10);
      y /= 10;
    }
    new_arr.insert(num);
  }

  return new_arr.size();
}

int main()
{
  vector<int> arr = {1,13,10,12,31};
  cout << countDistinctIntegers(arr);

  return 0;
}