class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int freq[101] = {0};
        for (int v : nums) ++freq[v];
        int prefix[101] = {0}, running = 0;
        for (int i = 0; i <= 100; ++i) {
            prefix[i] = running;
            running += freq[i];
        }
        vector<int> ans;
        ans.reserve(nums.size());
        for (int v : nums) ans.push_back(prefix[v]);
        return ans;
        
    }
};