class Solution {
public:
    double myPowHelper(double x, int n) {
        if(n==0) return 1.0;
            double partial_ans=myPowHelper(x,n/2);
            if(n%2==0)
            {
                return partial_ans*partial_ans;
            }
            else
            {
                return partial_ans*partial_ans*x;
            }
        }
        double myPow(double x, int n) {
            if(n<0)
            {
                return 1/myPowHelper(x,abs(n));
            }
            else
            {
                return myPowHelper(x,n);  
            }
    }
};