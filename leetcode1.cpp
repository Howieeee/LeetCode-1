class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> copy = nums;
        vector<int> ans;
        if(nums.size()==2){
            ans.push_back(0);
            ans.push_back(1);
            return ans;
        }
        sort(nums.begin(),nums.end());
        int left =0, right = nums.size()-1;
        while(left < right){
            
            if(nums[left]+nums[right]<target)
                left++;
            else if(nums[left]+nums[right]>target)
                right--;
            else{
                break;
            }
        }
        //找原本index
        for(int i=0;i<nums.size();i++){
            if(copy[i] == nums[left]){
                ans.push_back(i);
            }else if(copy[i] == nums[right]){
                ans.push_back(i);
            }
            if(ans.size()==2)
                break;
        }
        return ans;
    }
};
