class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int>ans;
        
        unordered_map<int,int>mp;//a[i]-->i
        
        for(int i=0;i<nums.size();i++){
            
            //a+b->sum then b= sum-a
            int a=nums[i];
            //b=target-a
            if(mp.find(target-a) != mp.end()){
                ans.push_back(i);
                ans.push_back(mp[target-a]);
                return ans;
            }
            
            mp[nums[i]]=i;
        }
        
        return ans;
    }
};