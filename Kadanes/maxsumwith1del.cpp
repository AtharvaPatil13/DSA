
class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int keep = arr[0];
        int del = arr[0];
        int ans = arr[0];

        for (int i = 1; i < arr.size(); i++) {
            int x = arr[i];

            int newKeep = max(x, keep + x);
            int newDel = max(keep, del + x);

            keep = newKeep;
            del = newDel;

            ans = max(ans, max(keep, del));
        }

        return ans;
    }
};
