class Solution {
public:
    void okk(int index,int tempor,vector<int>&nums,int &ans,int &maxor)
    {
        if(index>=nums.size())
        {
            if(tempor==maxor)ans++;
            return ;
        }
        okk(index+1,tempor,nums,ans,maxor);
        okk(index+1,(tempor | nums[index]),nums,ans,maxor);
    }
    int countMaxOrSubsets(vector<int>& nums)
    {
     int maxor=0;
     for(auto num:nums)
     {
         maxor=(maxor | num);
     }
       int ans=0;
      okk(0,0,nums,ans,maxor);
        return ans;
    }
};