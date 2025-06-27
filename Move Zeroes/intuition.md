Intuition: Move Zeroes (LeetCode #283)
You're given an integer array nums.
The task is to move all 0s to the end of the array while maintaining the relative order of non-zero elements.

You must do it in-place, without making a copy of the array.

 Key Insight
This is a classic two-pointer problem.

The idea is to treat the array like a stream of data:

One pointer (lastNonZeroIndex) tracks where the next non-zero should go

The other pointer (i) scans through every element

 What We Do
Loop through the array with index i

If nums[i] is non-zero:

Move it to the lastNonZeroIndex

Increment lastNonZeroIndex

After moving all non-zeros, fill the rest of the array with 0s
