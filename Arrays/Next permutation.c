#include <stdio.h>

void swap(int* a, int* b) {
int temp = *a;
*a = *b;
*b = temp;
}

void reverse(int* nums, int start, int end) {
while (start < end) {
swap(&nums[start], &nums[end]);
start++;
end--;
}
}

void nextPermutation(int* nums, int numsSize) {
int i, j;

// Step 1: Find the first breakpoint where nums[i] < nums[i + 1]
int idx = -1;
for (i = numsSize - 2; i >= 0; i--) {
if (nums[i] < nums[i + 1]) {
idx = i;
break;
}
}

// If no such index exists, the array is in descending order (last permutation)
if (idx == -1) {
reverse(nums, 0, numsSize - 1);
return;
}

// Step 2: Find the smallest number greater than nums[idx] to the right
for (i = numsSize - 1; i > idx; i--) {
if (nums[i] > nums[idx]) {
swap(&nums[i], &nums[idx]);
break;
}
}

// Step 3: Reverse the sequence to the right of the breakpoint
reverse(nums, idx + 1, numsSize - 1);
}