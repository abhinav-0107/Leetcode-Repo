class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long count=0;
        priority_queue<int> pq;
        for(auto i:nums) pq.push(i);
        for(int i=0;i<k;i++){
            int temp=pq.top();
            pq.pop();
            count+=temp;
            pq.push(ceil((double)temp/3));
        }
        return count;
    }
};