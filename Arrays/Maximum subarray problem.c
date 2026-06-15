
#include <stdio.h>
#include <limits.h>

long long maxSubArray(int nums[], int n) {
long long maxi = LONG_MIN;
long long sum = 0;

for (int i = 0; i < n; i++) {
sum += nums[i];

if (sum > maxi) {
maxi = sum;
}
// If sum becomes negative, reset it to zero
if (sum < 0) {
sum = 0;
}
}

return maxi;
}