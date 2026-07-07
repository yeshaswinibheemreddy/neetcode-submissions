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

//Because the map is fully built before the second loop runs
//if a value appears twice in the array, the map only keeps the index of its last occurrence
