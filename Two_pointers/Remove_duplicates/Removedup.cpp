class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        int officer = 0;  // Points to the last unique element

        for (int cm = 1; cm < nums.size(); cm++) {
            if (nums[cm] != nums[officer]) {
                officer++;
                nums[officer] = nums[cm];
            }
        }

        return officer + 1;
    }
};