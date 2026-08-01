class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        int left = 0;
        int right = letters.size()-1;
        char ans = letters[left + (right-left)/2];

        while(left <= right){

            int mid = left + (right-left)/2;

            if( target < letters[mid]){
                ans = letters[mid];
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
        if(target < ans){
            return ans;
        }else{
            return letters[0];
        }
    }
};