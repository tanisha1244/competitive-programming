class Solution {
public:
    int rangeBitwiseAnd(int l, int r) {
          if(l==0 || r==0) return 0;
        else if(l==r) return l;
        else if(r-l==1) return l&r;
        else if((int)log2(l) != (int)log2(r)) return 0;
        else{
            
            int ans=l;
            
            for(int j=l+1;j<=r;j++) ans&=j;
            
            
            return ans;
        }
        
    }
};