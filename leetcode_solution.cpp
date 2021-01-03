
void nextPermutation(vector<int>& nums) 
{
        int i=nums.size()-1;
        while(i)
        {
            if(nums[i]>nums[i-1])
            {
                for(int j=nums.size()-1;;j--)
                {
                    if(nums[j]>nums[i-1])
                    {
                        swap(nums[j],nums[i-1]);
                        reverse(nums.begin()+i,nums.end());
                        return;
                    }
                }
            }
            i--;
        }
        reverse(nums.begin(),nums.end());
        
 }
