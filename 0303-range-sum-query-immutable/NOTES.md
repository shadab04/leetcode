my notes
vector<int>v;
NumArray(vector<int>& nums) {
v=nums;
}
int sumRange(int left, int right) {
int sum=0;
for(int i=left;i<=right;i++)
{
sum+=v[i];
}
return sum;
}****