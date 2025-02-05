#include <bits\stdc++.h>

using namespace std;

bool areAlmostEqual(string s1, string s2)
{
    unordered_map<char, int> m1;
    unordered_map<char, int> m2;
    int unEqual = 0;
    bool boo = true;
    for(int i = 0, l = s1.size(); i < l; i++)
    {
        if (s1[i] != s2[i])
        {
            unEqual++;
        }
        m1[s1[i]]++;
        m2[s2[i]]++;
    }
    for (int i = 0, l = s1.size(); i < l; i++)
    {
        if (m1[s1[i]] != m2[s1[i]])
        {
            boo = false;
        }
    }
    if ((unEqual == 0 || unEqual == 2) && boo)
    {
        return true;
    }
    return false;
}

int main(void)
{
    cout << areAlmostEqual("hasan", "hsaan");
}