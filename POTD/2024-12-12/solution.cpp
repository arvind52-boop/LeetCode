class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>maxheap(gifts.begin(),gifts.end());
        while(k--){
            int curr = maxheap.top();
            maxheap.pop();
            maxheap.push(sqrt(curr));
        }
        long long ans =0;
        while(!maxheap.empty()){
            ans+=maxheap.top();
            maxheap.pop();
        }
        return ans;
    }
};
