class Solution {
public:
    int mySqrt(int x) 
    {
        long int st=0,end=x,mid,sq;
        while(st<=end)
        {
            mid=st+(end-st)/2;
            sq=mid*mid;
            
            if(x>=sq&&x<(mid+1)*(mid+1))
                return mid;
            if(sq>x)
                end=mid-1;        
            else
                st=mid+1;           
        }
        return 0;
    }
};