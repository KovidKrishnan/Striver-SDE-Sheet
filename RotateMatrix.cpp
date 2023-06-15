class Solution {
public:
    void rotate(vector<vector<int>>& a) {
        int k,n = a.size();
        for(int i=0;i<(n+1)/2;i++){
            for(int j=0;j<n/2;j++){
                k = a[n-j-1][i];
                a[n - 1 - j][i] = a[n - 1 - i][n - j - 1];
                a[n - 1 - i][n - j - 1] = a[j][n - 1 -i];
                a[j][n - 1 - i] = a[i][j];
                a[i][j] = k;
            }
        }
    }
};
