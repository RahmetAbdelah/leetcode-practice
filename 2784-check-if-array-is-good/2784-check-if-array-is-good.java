class Solution {
    public boolean isGood(int[] nums) {
        Arrays.sort(nums);
        if (nums[nums.length - 1] == nums.length - 1 && nums[nums.length - 2] == nums.length - 1) {
            for (int i = 1; i < nums.length - 1; i++) {
                if (nums[i - 1] != i) {
                    return false;
                }
            }
        } else {
            return false;
        }

        return true;
    }
}