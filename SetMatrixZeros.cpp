class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        int n = a.size(),m = a[0].size(),cf=0,rf=0;

        for(int i=0;i<n;i++) if(a[i][0] == 0) cf = 1; 
        for(int i=0;i<m;i++) if(a[0][i] == 0) rf = 1; 

        for(int i =1;i<n;i++) for(int j=1;j<m;j++) if(a[i][j]==0) a[0][j] = a[i][0] = 0; 
        for(int i=1;i<n;i++) for(int j=1;j<m;j++) if(!a[0][j] || !a[i][0]) a[i][j] = 0;

        if(rf) for(int i=0;i<m;i++) a[0][i] = 0;
        if(cf) for(int i=0;i<n;i++) a[i][0] = 0;
    }
};
