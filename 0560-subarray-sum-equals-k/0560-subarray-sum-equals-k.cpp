class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        m[0] = 1;
        int total = 0, count = 0;
        for (int n : nums) {
            total += n;
            if (m.find(total - k) != m.end()) {
                count += m[total - k];
            }
            m[total]++;
        }
        return count;
    }
};