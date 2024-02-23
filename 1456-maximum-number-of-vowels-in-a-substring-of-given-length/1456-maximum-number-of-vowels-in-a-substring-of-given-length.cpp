class Solution {
public:
    bool isvowel(char &ch)
    {
    return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
    }
    
    int maxVowels(string s, int k) {
        int n=s.size();
        int i=0,j=0;
        int count=0,maxv=0;
        while(j<n)
        {
            if(isvowel(s[j]))
                count++;
            if(j-i+1==k)
            {
                maxv=max(maxv,count);
                 if(isvowel(s[i]))
                     count--;
                i++;
            }
            j++;
        }
        return maxv;
    }
};
