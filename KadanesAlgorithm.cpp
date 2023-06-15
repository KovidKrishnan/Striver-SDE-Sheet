class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int sum = 0,n=a.size(),maxi = *max_element(a.begin(),a.end());
        for(int i=0;i<n;i++){
            sum += a[i];
            maxi = max(sum,maxi);
            if(sum<0) sum = 0;
        }
        return maxi;
    }
};
