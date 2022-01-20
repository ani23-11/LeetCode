class Solution {
public:
    int lengthOfLastWord(string s) {
        int l=s.size();
        int f=0,c=0;
        while(l--)
        {
            if((s[l]==' ')&& f==0)
                continue;
            else
            { 
                if(s[l]==' ')     
                    break;
                c++;
                f=1;  
            }
         }
        return c;    
    }
};