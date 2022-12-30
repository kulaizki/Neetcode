#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.size() < 2) return nums.size();
    int flag = nums[0];
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (flag != nums[i]) {
            nums[count++] = nums[i];
            flag = nums[i];
        }
    }
    return count;
}

int main()
{
    vector<int> v {0, 0, 1, 1, 2, 2, 3, 3, 4};
    cout << removeDuplicates(v) << '\n';
    for (int i = 0; i < v.size(); i++) cout << v[i] << '\n';

    return 0;
}