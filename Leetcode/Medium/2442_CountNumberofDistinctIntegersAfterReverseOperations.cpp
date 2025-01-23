
// #include <bits\stdc++.h>
#include <iostream>
#include <vector>


// int rev(int x)
// {
//   int num = 0;
//   while (x != 0)
//   {
//     num = (num * 10) + (x % 10);
//     x /= 10;
//   }
//   return num;
// }

using namespace std;

int main() {

    vector<int> listt = {1,13,10,12,31};

    for (int i = 0, l = listt.size(); i < l; i++)
    {
      int y = listt[i];
      cout << (y)+"\n";
      // listt.push_back(rev(y));
    }

    // for (int x : listt)
    // {
    //   cout << x+"\n";
    // }
  
  return 0;
}

