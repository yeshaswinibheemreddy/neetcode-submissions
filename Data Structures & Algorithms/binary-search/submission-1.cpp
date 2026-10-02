class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n=nums.size();
        int i=n/2,u=n-1,l=0;
        while(l<=u)
        { 
            if(target == nums[i])
            { return i;}
            else if(target<nums[i])
            {
                u=i-1;i=i/2;
            }
            else
            {
                l=i+1;i=(l+u)/2;
            }
        }
        return -1;
    }
};
