#include <bits/stdc++.h>

using namespace std;

bool checkString(string s){
    bool temp = true;
    
    for (int i = 0; i < s.size() - 1; i++)
    {
        if(s[i] > s[i+1])
        {
            return false;
        }
    }
    return temp;
}

int main(void)
{
    string s = "bbba";
    cout << checkString(s);
}