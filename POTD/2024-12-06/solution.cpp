class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set<int>st(begin(banned),end(banned));
        
        int ans =0;
        int sum =0;
        for(int i =1; i<=n; i++){
            if(st.count(i)){
                continue; //skip
            }
            if(sum+i <= maxSum){
                ans++;
                sum+=i;
            }
            else{
                break;
            }

        }
        return ans;
    }
};
