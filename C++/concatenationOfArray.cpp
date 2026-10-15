#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            ans.push_back(nums[i]);
        }
        for(int i = 0;i<n;i++){
            ans.push_back(nums[i]);
        }
        return ans;
    }
};

int main(){
    vector<int> nums = {1,2,3,4};
    Solution soln;
    vector<int> ans = soln.getConcatenation(nums);
    for (int i:ans){
        cout << i << " ";
    }
    return 0;
}