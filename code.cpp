class Solution {
public:
    bool areNumbersAscending(string s)
    {
        vector<int>nums;
        for(int i=0;i<s.length();i++)
        {
            string str="";
            while(i<s.length())
            {
                if(s[i]==' ')break;
                str+=s[i];
                i++;
            }
            if(str[0]>='1'&&str[0]<='9')
            {
                nums.push_back(stoi(str));
            }
        }
        for(int i=0;i<nums.size()-1;i++)
        {
          //  cout<<nums[i]<<" ";
            if(nums[i]>=nums[i+1])return false;
        }
        return true;
    }
};