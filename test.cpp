class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        if(n==0)
            return "";
        int tmp=0;
        int start=0;
        int maxlen=0;
        int j=0,k=0;
        
        for(int i=0;i<n;i++)
        {
            j=i;
            k=i;
            
            while(k<n-1 && s[k+1]==s[k])
                k++;
            
            
            while(k<n-1 && j>0 && s[k+1]==s[j-1])
            {
                k++;
                j--;
            }
            
            tmp=k-j+1;
            if(tmp>maxlen)
            {
                maxlen=tmp;
                start=j;
            }
        }
        
        return s.substr(start,maxlen);
    }
};
