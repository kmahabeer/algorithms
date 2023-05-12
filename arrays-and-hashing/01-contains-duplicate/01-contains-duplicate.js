/**
 * Using hashset
 * time complexity:
 * space complexity:
 * @param {number[]} nums
 * @return {boolean}
 */
let containsDuplicate = function (nums) {
  const uniqueNums = new Set(nums);
	return uniqueNums.size < nums.length ? true : false;
};

console.log(containsDuplicate([1,2,3,1]));
console.log(containsDuplicate([1,2,3,4]));
console.log(containsDuplicate([1,1,1,3,3,4,3,2,4,2]));
