class Solution {
public:
    int searchTheLowest(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size();
        
        int mid;
        
        while(low < high) {
            mid = (low + high)/2;
            if(nums[mid] >= target) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
	
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size() == 0) return {-1,-1};

        int start = searchTheLowest(nums, target);
        int end = searchTheLowest(nums, target+1) - 1; 
        
        if(start >= 0 && end >= 0 && start < nums.size() && end < nums.size() && nums[start] == target && nums[end] == target && start <= end) {
            return {start, end};
        }
        return {-1,-1};
    }
};