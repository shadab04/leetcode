class Solution {
public:
    
     bool isPowerOfFourHelper(int n) {
         if(n<=0) return false;
         if(n==1)return true;
         if(n % 4!=0) return false;
         return isPowerOfFourHelper(n/4);
        
    }
    bool isPowerOfFour(int n) {
        return isPowerOfFourHelper( n);
    }
};