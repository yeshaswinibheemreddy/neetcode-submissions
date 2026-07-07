class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> comp;

        for(int i=0;i<nums.size();i++)
        {
            comp[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++)
        {
            int diff = target - nums[i];
            if(comp.count(diff) && comp[diff]!=i)
            {
                return{i, comp[diff]};
            }
        }
        return {};


        
    }
};
