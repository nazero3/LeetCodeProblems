std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {

	std::vector<std::vector<int>> result;

	// step 1: sort the array
	std::sort(nums.begin(), nums.end());

	// step 2: iterate through the array, using nums[i] as the first element of the triplet
	for (int i = 0; i < nums.size(); i++) {
		// skip duplicates for the first element
		if (i > 0 && nums[i] == nums[i - 1]) {
			continue;
		}

		int left = i + 1;
		int right = nums.size() - 1;

		// step 3: use two pointers to find the other two numbers that sum up to -nums[i]
		while (left < right) {
			int sum = nums[i] + nums[left] + nums[right];

			if (sum == 0) {
				// found a valid triplet
				result.push_back({ nums[i], nums[left], nums[right] });

				// move pointers to the next different values to avoid duplicates
				while (left < right && nums[left] == nums[left + 1]) left++;
				while (left < right && nums[right] == nums[right - 1]) right--;

				left++;
				right--;
			}
			else if (sum < 0) {
				// if the sum is less than zero, move the left pointer to increase the sum
				left++;
			}
			else {
				// if the sum is greater than zero, move the right pointer to decrease the sum
				right--;
			}
		}
	}

	return result;
}
