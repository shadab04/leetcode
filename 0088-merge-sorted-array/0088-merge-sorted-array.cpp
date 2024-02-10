class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>aux;
        int i=0,j=0;
         while(i<m&&j<n)
         {
             if(nums1[i]<nums2[j])
             {
                 aux.push_back(nums1[i]);
                 i++;
             }
            else
            {
                aux.push_back(nums2[j]);
                j++;
            } 
         }
        while(i<m)
        {
            aux.push_back(nums1[i]);
            i++;
        }
        while(j<n)
        {
            aux.push_back(nums2[j]);
            j++;
        }
        for(int id=0;id<n+m;id++)
        {
            nums1[id]=aux.at(id);
        }
        }
};