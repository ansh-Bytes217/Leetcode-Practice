Approach: Sliding Window
Intuition

In this problem, we want to make as many elements as we can equal using k increments.

Let's say that we choose a number target and want to maximize its frequency. Intuitively, the elements that we would increment would be the elements that are closest to target (and less than target, since we can only increment).

So what number should we choose for target? The optimal target will already exist in the array. Why?

Assume target is in nums, but target - 1 and target + 1 are not in nums. Let's say that we can increment x elements to be equal to target using at most k operations. We will prove that making target - 1 or target + 1 the most frequent element does not lead to better results.
example


It would be pointless to instead try to make target + 1 the most frequent element, since this would cost us x extra operations and we would not improve on our answer. The same goes for even larger elements target + 2 and etc.
example


What about target - 1? Compared with making target the most frequent element, we would lose the values representing these targets from our max frequency, but we would save x operations which we could potentially use to increment more than one extra element and thus improve our answer.
example


The above statement is true, but meaningless! Consider the greatest element in nums that is less than target. That is, if we were to sort nums, consider the element that comes right before target. If we were to instead consider this element as the target, we would save more than x operations without negatively affecting the frequency relative to considering target - 1.
example


In summary, for any given number absent that is not in nums, consider the greatest number in nums smaller than absent as smallerTarget. The number of operations to raise some number of elements to smallerTarget will always be less than the number of steps needed to raise them to absent.
Thus, the optimal value of target must exist in nums. We can iterate over nums and consider each element as target.
For a given value of target, how can we efficiently check the frequency we could achieve? As we mentioned at the start, we would want to increment elements that are closest to target. As such, we will start by sorting nums so that as we iterate over the elements, we know the elements closest to target are just to the left of target.

Now that nums is sorted, consider the first element to the left of target as smaller. As smaller is the closest element to target, we want to increment it to equal target. This will cost us target - smaller operations. Now, consider the next element to the left as smaller2. Now this is the element closest to target, so we increment it using target - smaller2 operations. We continue this process until we run out of operations.

As you can see, the number of operations required is simply the difference between target and the numbers we are incrementing. Let's say that the final frequency of target was 4. We would have a sum of 4 * target. The number of operations would be this sum minus the sum of the elements before we incremented them. Consider the following example:

example




The size of the window is right - left + 1. That means we would have a final sum of (right - left + 1) * target. If we track the sum of our window in a variable curr, then we can calculate the required operations as (right - left + 1) * target - curr. If it requires more than k operations, we must shrink our window. Like in all sliding window problems, we will use a while loop to shrink our window by incrementing left until k operations are sufficient.

Once the while loop ends, we know that we can make all elements in the window equal to target. We can now update our answer with the current window size. The final answer will be the largest valid window we find after iterating right over the entire input.

Algorithm

Sort nums.
Initialize the following integers:
left = 0, the left pointer.
ans = 0, the best answer we have seen so far.
curr = 0, the sum of the elements currently in our window.
Iterate right over the indices of nums:
Consider target = nums[right].
Add target to curr.
While the size of the window right - left + 1 multiplied by target, minus curr is greater than k:
Subtract nums[left] from curr.
Increment left.
Update ans with the current window size if it is larger.
Return ans.
