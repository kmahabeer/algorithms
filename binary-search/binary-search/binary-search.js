/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var search = function (nums, target) {
	let left_index = 0;
	let right_index = nums.length - 1;

	while (left_index <= right_index) {
		let middle_index = Math.floor((left_index + right_index) / 2);
		if (target == nums[middle_index]) return middle_index;
		else if (target < nums[middle_index]) right_index = middle_index - 1;
		else if (target > nums[middle_index]) left_index = middle_index + 1;
	}
	return -1;
};

console.log(search([-1, 0, 3, 5, 9, 12], 9)); // 4
console.log(search([-1, 0, 3, 5, 9, 12], 2)); // -1
console.log(search([5], 5)); // 0
console.log(search([1, 5], 5)); // 1
console.log(search([1, 3], 5)); // -1
console.log(search([-1, 0, 5], 5)); // 2
