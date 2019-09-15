vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        vector<int> v;
        for(int i=0; i<nums.size(); i++){
            auto it = mp.find(target-nums[i]);
            if(it!=mp.end()){
                v.push_back(it->second);
                v.push_back(i);
                return v;
            }
            else{
                mp[nums[i]]=i;  
            }                
        }
        return v;
    }
