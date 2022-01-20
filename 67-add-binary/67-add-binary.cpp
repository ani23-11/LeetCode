class Solution {
public:
    string addBinary(string a, string b) 
    {
        string result;
        char c='0',a_i,b_j;
        int val;
        
        for(int i=a.size()-1,j=b.size()-1;i>=0||j>=0||c =='1';i--,j--)
        {
            a_i='0'; b_j='0';
            if(i>=0)
                a_i=a[i]; 
            if(j>=0)
                b_j=b[j];
            
            val=a_i-'0'+b_j-'0'+c-'0';     
            c='0';
            
            switch(val)
            {
                case 0: result.insert(result.begin(),'0');
                        break;
                        
                case 1: result.insert(result.begin(),'1');
                        break;
                    
                case 2: result.insert(result.begin(),'0');
                        c = '1';
                        break;
                        
                case 3 :result.insert(result.begin(),'1');
                        c = '1';
                        break;
            }
            
         }  
         return result; 
    }
};