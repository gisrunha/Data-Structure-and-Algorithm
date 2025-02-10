#include <bits\stdc++.h>

using namespace std;

string clearDigits(string s) {
    int temp = 0;
    string result = "";
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if ((int)s[i] < 58)
        {
            temp++;
        }
        else
        {
            if (temp == 0)
            {
                result += s[i];
            }
            else
            {
                temp--;
            }
        }
    }
    for (int i = 0, l = result.size(); i < l / 2; i++)
    {
        swap(result[i], result[l-i-1]);
    }
    return result;
    // 0 1 2 3
}

int main(void)
{
    string s = "cb34";
    cout << clearDigits(s);
}