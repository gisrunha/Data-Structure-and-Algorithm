#include <iostream>
#include <vector>

using namespace std;

int scoreOfString(string s)
{
  int sum = 0;
  for (int i = 0, l = s.size(); i < l - 1; i++)
    {
      int temp = (int)s[i] - (int)s[i+1];
      if (temp < 0)
      {
        sum += (temp*(-1));
      }
      else
      {
        sum += temp;
      }
    }
  return sum;
}


int main() {
  cout << scoreOfString("zaz");
}