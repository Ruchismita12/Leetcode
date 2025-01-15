class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long,vector<long long>,greater<long long>> q;
        for(int i=0;i<nums.size();i++)
        {
            q.push(nums[i]);
        }
        int c=0;
        while(q.size() >= 2)
        {
            if(q.top()>=k)
            {
                return c;
            }
            long long a=q.top();
            q.pop();
            long long b=q.top();
            q.pop();

            long long ans=min(a,b)*2 +max(a,b);
            q.push(ans);
            c++;
        }
        return c;
    }
};