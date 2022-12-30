#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    unordered_map<int, int> hash; // Number, Index       
    for (int i = 0; i < numbers.size(); i++) {
        int numberToFind = target - numbers[i];
        if (hash.find(numberToFind) != hash.end()) 
            return {hash[numberToFind], i};
        hash[numbers[i]] = i;
    }
    return {};
}

int main()
{
    vector<int> v {2,7,11,15};
    int target = 9;
    vector<int> ans = twoSum(v, target);
    for (int i : ans) cout << i << '\t';

    return 0;
}

