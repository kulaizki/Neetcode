#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool validAnagram(string s, string t) {
    if (s.size() != t.size())
        return false;
    vector<int> h(26);
    for (int i = 0; i < s.size(); i++)
        h[s[i] - 'a']++;
    for (int i = 0; i < t.size(); i++) {
        int x = --h[t[i] - 'a'];
        if (x < 0) return false;
    }
    return true;
}

int main()
{
    string s = "anagram", t = "gramana";
    validAnagram(s, t) ? cout << "true" : cout << "false";
}