class Solution {
public:
    int maxProfit(vector<int>& a) {
        int mini = INT_MAX,ans = 0,n = a.size();
        for(int i=0;i<n;i++){
            mini = min(mini,a[i]);
            ans = max(ans,a[i]-mini);
        }
        return ans;
    }
};
