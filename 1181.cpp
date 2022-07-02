#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
bool comp(string s1, string s2)
{
    if (s1.length() == s2.length())
    {
        return s1 < s2;
    }
    else
        return s1.length() < s2.length();
}
int main()
{
    int n;
    string word;
    vector<string> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> word;
        v.push_back(word);
    }
    sort(v.begin(), v.end(), comp);
    for (int i = 0; i < n; i++)
        if (i>0 && v[i] == v[i-1])
            continue;
        else
            cout << v[i] << "\n";
    return 0;
}