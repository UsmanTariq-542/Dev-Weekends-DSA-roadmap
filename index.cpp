class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int size = nums.size();
        vector<int> sum;
        sum.push_back(nums[0]);
        for (int i = 1; i < size; i++) {
            sum.push_back(sum[i - 1] + nums[i]);
        }

        return sum;
    }
};

//Better solution is to make changes in nums instead of creating new vector result like
//initializing sum variable to 0 and then sum = nums[i] + sum  , nums[i]=sum
