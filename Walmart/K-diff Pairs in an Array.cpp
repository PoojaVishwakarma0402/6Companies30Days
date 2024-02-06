// class Solution {
// public:
//     int findPairs(vector<int>& nums, int k) {
//         unordered_map<int,int> a;
//         for(int i:nums)
//             a[i]++;
//         int ans=0;
//         for(auto x:a)
//         {
//             if(k==0)
//             {    
//                 if(x.second>1)
//                 ans++;
//             }
//              else if(a.find(x.first+k)!=a.end())
//                 ans++;
//         }
        
//         return ans;
//     }
// };


class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans=0,i=0,j=1;
        for(i,j;i<nums.size() && j<nums.size();)
        {
            if(i==j || nums[j]-nums[i]<k)
                j++;
            else 
            {
                if(nums[j]-nums[i]==k)
                {
                    ans++;
                    j++;
                    for(;j<nums.size();j++){
                        if(nums[j]!=nums[j-1]){
                            break;
                        }
                    }
                        
                    if(j==nums.size())
                    return ans;
                   
                                  
                }
                i++;
                while(i<j && nums[i]==nums[i-1])
                    i++;
            }
        }
        return ans;
    }
};
