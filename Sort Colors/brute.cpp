class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int k = nums.size()-1;
        while(j<=k){
            if(nums[i]==0 and nums[j]==0){
                swap(nums[i],nums[j]);
                i++;
                j++;
                cout<<1;
            }
            else if(nums[j]==1){
                j++;
                cout<<2;
            }
             else if(nums[j]==0 and nums[i]==1){
                swap(nums[j],nums[i]);
                j++;
                i++;
                cout<<3;
            }
            else if(nums[j]==2 and nums[k]==1){
                swap(nums[j],nums[k]);
                j++;
                k--;
                cout<<4;
            }
            else if(nums[j]==2 and nums[k]==0){
                swap(nums[j],nums[k]);
                k--;
                
                cout<<5;
            }
            else{
                k--;
                cout<<6;
            }
        }
    }
};
