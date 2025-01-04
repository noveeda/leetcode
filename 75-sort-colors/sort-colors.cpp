class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        
        for(int i = 0; i < nums.size() - 1; i++){
            int curIdx = i;
            int minIdx = i;
            
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[j] < nums[minIdx]) minIdx = j;
            }
            
            int temp = nums[curIdx];
            nums[curIdx] = nums[minIdx];
            nums[minIdx] = temp;
        }
    }
};