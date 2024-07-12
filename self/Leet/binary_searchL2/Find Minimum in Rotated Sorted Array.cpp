// o(n)
class Solution {
public:
    int findMin(vector<int>& nums) {

        int mini = INT_MAX;
        for(int i=0; i<nums.size(); i++){

            if(nums[i]< mini){
                mini = nums[i];

            }
        }

        return mini;
        
    }
};


// o(logn)

class Solution {
public:
    int findMin(vector<int>& nums) {

    int low = 0, high = nums.size() - 1;
    int ans = INT_MAX;
    while (low <= high) {
        int mid = (low + high) / 2;

        //if left part is sorted:
        if (nums[low] <= nums[mid]) {
            // keep the minimum:
            ans = min(ans, nums[low]);

            // Eliminate left half:
            low = mid + 1;
        }
        else { //if right part is sorted:

            // keep the minimum:
            ans = min(ans, nums[mid]);

            // Eliminate right half:
            high = mid - 1;
        }
    }
    return ans;

    }
};