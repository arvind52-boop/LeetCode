class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        map<int,int>result;
        int ans =0;
        int tempAns = 0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            result[nums[i]-k]++;
            result[nums[i]+k+1]--;
        }
        for( auto i: result){
            tempAns +=i.second;
            ans = max(ans,tempAns);
        }
        return ans;
    }
};
