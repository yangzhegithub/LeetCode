#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution_1 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

class Solution_2 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashtable;
        for (int i = 0; i < nums.size(); ++i) {
            auto it = hashtable.find(target - nums[i]);
            if (it != hashtable.end()) {
                return {it->second, i};
            }
            hashtable[nums[i]] = i;
        }
        return {};
    }
};


int main(int argc, char* [])
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    Solution_1 solution_1;
    vector<int> tmp_1 = solution_1.twoSum(nums, target);

    Solution_2 solution_2;
    vector<int> tmp_2 = solution_2.twoSum(nums, target);
    
    for(int i = 0; i < tmp_1.size(); ++i) {
        cout << tmp_1[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < tmp_2.size(); ++i) {
        cout << tmp_2[i] << " ";
    }
    
    cout<< endl;

}
