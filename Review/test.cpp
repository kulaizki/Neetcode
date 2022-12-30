#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<int, int> h;
    h[27] = 14;

    cout << h[27];
}