class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int result = INT32_MAX;
        int sum = 0;
        int i = 0;
        int subLength = 0; 
        for (int j = 0; j < nums.size(); j++) {
            sum += nums[j];
            while (sum >= s) {
                subLength = (j - i + 1); 
                result = result < subLength ? result : subLength;
                sum -= nums[i++]; // here is the key point of sliding window, time complexity is 2*n, O(n)
            }
        }
        return result == INT32_MAX ? 0 : result;
    }
};