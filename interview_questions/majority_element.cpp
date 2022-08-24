class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        map<int,int> mp;
        
        for(int i=0;i<nums.size();i++){
            
            if(mp.count(nums[i]))
                mp[nums[i]]++;
            else
                mp[nums[i]]=1;
            
             
            if(mp[nums[i]]> nums.size()/2)
                  return nums[i];
        }
        
        return -1;
    }
};