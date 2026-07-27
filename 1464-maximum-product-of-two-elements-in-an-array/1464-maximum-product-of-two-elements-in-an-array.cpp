class Solution {
public:
    int maxProduct(vector<int>& nums) {

       sort(nums.begin(),nums.end());

       if(nums.empty()){
        return 0;
       } 
       
       int i=nums.size()-1;
       int j=nums.size()-2;

        if(i==j){
            return 0;
        }
        
       int max = (nums[i]-1)*(nums[j]-1);

       return max;
    }
};