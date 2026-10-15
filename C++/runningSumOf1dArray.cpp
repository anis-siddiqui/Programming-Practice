#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> runningSum;
        for(int i = 0; i<nums.size(); i++){
            int ans;
            if(i==0){
                ans = nums[i];
                runningSum.push_back(ans);
                continue;
            }
            ans = nums[i]+runningSum[i-1];
            runningSum.push_back(ans);
        }
        return runningSum;
    }
};

int main(){
    vector<int> nums = {1,2,3,4};
    Solution soln;
    vector<int> ans = soln.runningSum(nums);
    for (int i:ans){
        cout << i << " ";
    }
    return 0;
}