class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        int n=a.size();
        vector<int> v;
        vector<vector<int>> x;
        if(n==0 || n==1)
            return a;
        
        sort(a.begin(),a.end());
        for(int i=1;i<n;i++)
        {
            if(a[i][0]<=a[i-1][1])
            {
                a[i][0]=a[i-1][0];
                a[i][1]=max(a[i][1],a[i-1][1]);
            }
            else
                x.push_back(a[i-1]);
        }
        x.push_back(a[n-1]);
        return x;
    }
};
