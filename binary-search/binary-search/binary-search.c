#include <stdio.h>

int search(int *nums, int numsSize, int target)
{
  int leftIndex = 0;
  int rightIndex = numsSize - 1;

  while (leftIndex <= rightIndex)
  {
    int middleIndex = leftIndex + (rightIndex - leftIndex) / 2;

    if (nums[middleIndex] == target)
    {
      return middleIndex;
    }
    else if (nums[middleIndex] < target)
    {
      leftIndex = middleIndex + 1;
    }
    else
    {
      rightIndex = middleIndex - 1;
    }
  }
  return -1;
}

int main()
{
  int list1[] = {-1, 0, 3, 5, 9, 12};
  int list2[] = {-1, 0, 3, 5, 9, 12};
  int list3[] = {5};
  int list4[] = {1, 5};
  int list5[] = {1, 3};
  int list6[] = {-1, 0, 5};

  int result1 = search(list1, sizeof(list1) / sizeof(list1[3]), 9); // 4
  int result2 = search(list2, sizeof(list2) / sizeof(list2[3]), 2); // -1
  int result3 = search(list3, sizeof(list3) / sizeof(list3[3]), 5); // 0
  int result4 = search(list4, sizeof(list4) / sizeof(list4[3]), 5); // 1
  int result5 = search(list5, sizeof(list5) / sizeof(list5[3]), 5); // -1
  int result6 = search(list6, sizeof(list6) / sizeof(list6[3]), 5); // 2

  printf("Result: %d", result1);
  printf("\nResult: %d", result2);
  printf("\nResult: %d", result3);
  printf("\nResult: %d", result4);
  printf("\nResult: %d", result5);
  printf("\nResult: %d", result6);
  printf("\n");
}