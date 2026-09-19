class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_set<int> s1(nums.begin(), nums.end());
        vector<int> v(s1.begin(), s1.end());
        sort(v.begin(), v.end());

        if(v.size() < 3) {
            return v.back();
        }

        return v[v.size() - 3];
    }
};