class Solution {
public:
    int singleNumber(vector<int>& nums) {
      
        
        map<int,int> mp;
        int res;
        
        for(int i=0;i<nums.size();i++){
            if(mp.count(nums[i]))
                mp[nums[i]]++;
            else
                mp[nums[i]] = 1;
        }
        
        for(auto i:mp){
            if (i.second !=2 )
                res= i.first;
        }
        
        return res;
    }
    
    
};