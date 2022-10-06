class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int res=INT_MIN;
        int n=arr.size();
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            while(st.empty()==false && arr[st.top()]>=arr[i])
            {
                int pos=st.top();
                st.pop();
                int curr=(st.empty()==true)?(i*arr[pos]):((i-st.top()-1)*arr[pos]);
                res=max(res,curr);
            }
            st.push(i);
        }
        while(st.empty()==false)
        {
            int pos=st.top();
            st.pop();
            int curr=(st.empty()==true)?(n*arr[pos]):((n-st.top()-1)*arr[pos]);
            res=max(res,curr);
        }
        return res;
    }
};
