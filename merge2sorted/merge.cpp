#include <vector>
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        vector<int> neg;
        vector<int> pos;
        vector<int> ans;

        // Separate negative and non-negative numbers
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0)
                neg.push_back(nums[i]);
            else
                pos.push_back(nums[i]);
        }

        // Square every element
        for (int i = 0; i < neg.size(); i++)
            neg[i] = neg[i] * neg[i];

        for (int i = 0; i < pos.size(); i++)
            pos[i] = pos[i] * pos[i];

        // Reverse negative part because after squaring
        // it should become increasing
        reverse(neg.begin(), neg.end());

        // Merge the two sorted arrays
        int i = 0, j = 0;

        while (i < neg.size() && j < pos.size()) {
            if (neg[i] <= pos[j])
                ans.push_back(neg[i++]);
            else
                ans.push_back(pos[j++]);
        }

        while (i < neg.size())
            ans.push_back(neg[i++]);

        while (j < pos.size())
            ans.push_back(pos[j++]);

        return ans;
    }
};