class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0)
            return 0;
        int m=1;
        unordered_map<char, int>mp;
        int start=0,end=0;
        for(end=0;end<s.length();end++)
        {
            if(mp.find(s[end])!=mp.end())
            {
                int len=end-start;
                m=max(m,len);
                while(start<end && mp[s[end]]!=0)
                {
                    mp[s[start]]--;
                    start++;
                }
                mp.erase(s[end]);
            }
            mp[s[end]]++;
        }
        m=max(m,(end-start));
        return m;
    }
};
